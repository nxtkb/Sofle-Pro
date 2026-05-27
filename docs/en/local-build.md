# Sofle-Pro Local Build

This guide describes how to build the Sofle-Pro ZMK firmware locally. First set `NXTKB_ROOT` to your local checkout path:

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
```

The following commands assume you are running them from the ZMK west workspace root. `$NXTKB_ROOT/Sofle-Pro` is the keyboard config and shield repository, not the west workspace root. Do not run `west build` directly inside the `Sofle-Pro` directory.

The local build now uses the official `zmkfirmware/zmk` checkout. The dongle branch uses a three-firmware structure: `sofle_pro_dongle` is the central, and both keyboard halves are split peripherals. The e-ink display and TPS65 trackpad are on the dongle PCB. The display status screen still uses the standalone `zmk-vfx-sweep-pro-display` module, so the dongle build needs that module in `ZMK_EXTRA_MODULES` and `sweep_display` in the `SHIELD` list.

All Sofle-Pro builds still share `config/sofle_pro.keymap`. The dongle handles keymap state, layers, HID, ZMK Studio, the display, and the TPS65 trackpad. The left and right halves only capture key/encoder events and forward them to the dongle over BLE split.

## Dependencies

You need system build tools, the Zephyr SDK, and `uv`.

Arch Linux example:

```shell
sudo pacman -S git cmake ninja gperf ccache dfu-util dtc wget \
    tk xz file make uv
```

Install the Zephyr SDK from AUR, or install it manually by following the ZMK/Zephyr documentation:

```shell
paru -S zephyr-sdk
```

If the SDK is not detected automatically, set these variables in the current shell:

```shell
export ZEPHYR_TOOLCHAIN_VARIANT=zephyr
export ZEPHYR_SDK_INSTALL_DIR="$HOME/zephyr-sdk-0.17.0"
```

## Initialize Python

Create a project-local virtual environment from the ZMK workspace root:

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
uv venv --python 3.13
source .venv/bin/activate
uv pip install west
```

Reactivate the virtual environment in every new terminal before building:

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
source .venv/bin/activate
```

## Initialize West

Run this once for a fresh checkout:

```shell
west init -l app/
west update
west zephyr-export
uv pip install -r zephyr/scripts/requirements-base.txt protobuf
```

`west zephyr-export` writes to the user-level CMake package registry. `west update` and `uv pip install` need network access.

## Build Sofle-Pro

Common parameters:

```shell
export NXTKB_ROOT="/path/to/nxtkb"
EXTRA_MODULES="$NXTKB_ROOT/Sofle-Pro;$NXTKB_ROOT/zmk-vfx-sweep-pro-display;$NXTKB_ROOT/zmk-driver-azoteq-iqs5xx;$NXTKB_ROOT/zmk-behavior-report;$NXTKB_ROOT/zmk-behavior-send-string"
ZMK_CONFIG_DIR="$NXTKB_ROOT/Sofle-Pro/config"
```

Build these three firmware files:

| Firmware | Shield combination | Use |
| :--- | :--- | :--- |
| `sofle_pro_dongle` | `sofle_pro_dongle sweep_display` | Dongle central with e-ink, TPS65, and ZMK Studio |
| `sofle_pro_left_peripheral` | `sofle_pro_left` | Left peripheral |
| `sofle_pro_right_peripheral` | `sofle_pro_right` | Right peripheral |

Dongle central. Studio RPC over USB UART is useful for ZMK Studio remapping:

```shell
west build -s app -p -d build/sofle_pro_dongle -b nice_nano//zmk \
    -S studio-rpc-usb-uart -- \
    -DSHIELD="sofle_pro_dongle sweep_display" \
    -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
    -DZMK_CONFIG="$ZMK_CONFIG_DIR"
```

Left peripheral:

```shell
west build -s app -p -d build/sofle_pro_left_peripheral -b nice_nano//zmk -- \
    -DSHIELD=sofle_pro_left \
    -DCONFIG_ZMK_SPLIT=y \
    -DCONFIG_ZMK_SPLIT_ROLE_CENTRAL=n \
    -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
    -DZMK_CONFIG="$ZMK_CONFIG_DIR"
```

Right peripheral:

```shell
west build -s app -p -d build/sofle_pro_right_peripheral -b nice_nano//zmk -- \
    -DSHIELD=sofle_pro_right \
    -DCONFIG_ZMK_SPLIT=y \
    -DCONFIG_ZMK_SPLIT_ROLE_CENTRAL=n \
    -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
    -DZMK_CONFIG="$ZMK_CONFIG_DIR"
```

The commands explicitly use `-s app` because the current directory is the workspace root, while the ZMK application source is under `app/`.

After a successful build, the firmware files are:

```text
build/sofle_pro_dongle/zephyr/zmk.uf2
build/sofle_pro_left_peripheral/zephyr/zmk.uf2
build/sofle_pro_right_peripheral/zephyr/zmk.uf2
```

For later builds with the same CMake parameters, you can usually reuse the build directories:

```shell
west build -d build/sofle_pro_dongle
west build -d build/sofle_pro_left_peripheral
west build -d build/sofle_pro_right_peripheral
```

If you change the shield, extra modules, snippets, or `ZMK_CONFIG`, rerun the full command with `-p` to regenerate the build directory.

## Troubleshooting

If you see:

```text
west: unknown command "build"; do you need to run this inside a workspace?
```

you are not in the west workspace. Return to:

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
source .venv/bin/activate
```

If you see:

```text
source directory "." does not contain a CMakeLists.txt
```

you ran the command from the workspace root without `-s app`.

Before flashing the dongle structure for the first time, flash `settings_reset` to the dongle, left half, and right half. Then flash the three production UF2 files. The left and right halves are peripherals and will not connect to the host as standalone keyboards; the host connects only to `sofle_pro_dongle`.
