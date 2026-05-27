# Sofle-Pro 本地编译

本文记录在本机编译 Sofle-Pro ZMK 固件的流程。先按你的实际 checkout 位置设置 `NXTKB_ROOT`：

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
```

后续命令默认从 ZMK workspace 根目录执行。`$NXTKB_ROOT/Sofle-Pro` 是键盘配置和 shield 仓库，不是 west workspace 根目录。不要在 `Sofle-Pro` 目录里直接执行 `west build`。

当前本地编译使用官方 `zmkfirmware/zmk` checkout。dongle 分支把 Sofle-Pro 改为三固件结构：`sofle_pro_dongle` 是 central，左右手都是 split peripheral。电子墨水屏和 TPS65 触控板都在 dongle PCB 上，屏幕状态栏继续使用独立模块 `zmk-vfx-sweep-pro-display`，因此 dongle 固件需要同时加入该 module，并把 `sweep_display` 放进 `SHIELD` 列表。

Sofle-Pro 的 keymap 仍然共用 `config/sofle_pro.keymap`。dongle 负责 keymap、layer、HID、ZMK Studio、墨水屏和 TPS65；左右手只采集按键/编码器事件并通过 BLE split 发给 dongle。

## 依赖

本机需要先准备系统构建工具、Zephyr SDK 和 `uv`。

Arch Linux 示例：

```shell
sudo pacman -S git cmake ninja gperf ccache dfu-util dtc wget \
    tk xz file make uv
```

Zephyr SDK 可以通过 AUR 安装，或按 ZMK/Zephyr 官方文档手动安装：

```shell
paru -S zephyr-sdk
```

如果 SDK 没有被自动识别，可以在当前 shell 里指定：

```shell
export ZEPHYR_TOOLCHAIN_VARIANT=zephyr
export ZEPHYR_SDK_INSTALL_DIR="$HOME/zephyr-sdk-0.17.0"
```

## 初始化 Python 环境

在 ZMK workspace 根目录创建项目内虚拟环境：

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
uv venv --python 3.13
source .venv/bin/activate
uv pip install west
```

每次新开终端编译前，都需要重新激活虚拟环境：

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
source .venv/bin/activate
```

## 初始化 west workspace

第一次配置这个 checkout 时执行：

```shell
west init -l app/
west update
west zephyr-export
uv pip install -r zephyr/scripts/requirements-base.txt protobuf
```

`west zephyr-export` 会写入用户级 CMake package registry；`west update` 和 `uv pip install` 需要联网。

## 编译 Sofle-Pro

公共参数：

```shell
export NXTKB_ROOT="/path/to/nxtkb"
EXTRA_MODULES="$NXTKB_ROOT/Sofle-Pro;$NXTKB_ROOT/zmk-vfx-sweep-pro-display;$NXTKB_ROOT/zmk-driver-azoteq-iqs5xx;$NXTKB_ROOT/zmk-behavior-report;$NXTKB_ROOT/zmk-behavior-send-string"
ZMK_CONFIG_DIR="$NXTKB_ROOT/Sofle-Pro/config"
```

推荐一次性编译这三个固件：

| 固件 | Shield 组合 | 用途 |
| :--- | :--- | :--- |
| `sofle_pro_dongle` | `sofle_pro_dongle sweep_display` | dongle central，带 e-ink、TPS65、ZMK Studio |
| `sofle_pro_left_peripheral` | `sofle_pro_left` | 左手从手 |
| `sofle_pro_right_peripheral` | `sofle_pro_right` | 右手从手 |

dongle central。建议启用 Studio RPC over USB UART，方便用 ZMK Studio 改键：

```shell
west build -s app -p -d build/sofle_pro_dongle -b nice_nano//zmk \
    -S studio-rpc-usb-uart -- \
    -DSHIELD="sofle_pro_dongle sweep_display" \
    -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
    -DZMK_CONFIG="$ZMK_CONFIG_DIR"
```

左手从手：

```shell
west build -s app -p -d build/sofle_pro_left_peripheral -b nice_nano//zmk -- \
    -DSHIELD=sofle_pro_left \
    -DCONFIG_ZMK_SPLIT=y \
    -DCONFIG_ZMK_SPLIT_ROLE_CENTRAL=n \
    -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
    -DZMK_CONFIG="$ZMK_CONFIG_DIR"
```

右手从手：

```shell
west build -s app -p -d build/sofle_pro_right_peripheral -b nice_nano//zmk -- \
    -DSHIELD=sofle_pro_right \
    -DCONFIG_ZMK_SPLIT=y \
    -DCONFIG_ZMK_SPLIT_ROLE_CENTRAL=n \
    -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
    -DZMK_CONFIG="$ZMK_CONFIG_DIR"
```

这里显式使用 `-s app`，因为当前目录是 workspace 根目录，ZMK 应用源码在 `app/` 下。

构建成功后，固件位于：

```text
build/sofle_pro_dongle/zephyr/zmk.uf2
build/sofle_pro_left_peripheral/zephyr/zmk.uf2
build/sofle_pro_right_peripheral/zephyr/zmk.uf2
```

第二次编译同一个 build 目录时，如果 CMake 参数没有变化，可以直接执行：

```shell
west build -d build/sofle_pro_dongle
west build -d build/sofle_pro_left_peripheral
west build -d build/sofle_pro_right_peripheral
```

修改了 shield、extra modules、snippets 或 `ZMK_CONFIG` 后，建议继续使用带 `-p` 的完整命令重新生成构建目录。

## 常见问题

如果看到：

```text
west: unknown command "build"; do you need to run this inside a workspace?
```

说明当前目录不是 west workspace，回到：

```shell
export NXTKB_ROOT="/path/to/nxtkb"
cd "$NXTKB_ROOT/zmkfirmware/zmk"
source .venv/bin/activate
```

如果看到：

```text
source directory "." does not contain a CMakeLists.txt
```

说明命令从 workspace 根目录执行时缺少 `-s app`。

第一次刷入 dongle 结构前，建议先给 dongle、左手、右手都刷一次 `settings_reset`，再分别刷入三个正式固件。左右手是 peripheral，不会作为独立键盘连接主机；主机只连接 `sofle_pro_dongle`。
