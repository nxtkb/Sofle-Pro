#!/usr/bin/env bash
set -euo pipefail

SOFLE_PRO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
NXTKB_ROOT="${NXTKB_ROOT:-$(dirname "$SOFLE_PRO_ROOT")}"
ZMK_WORKSPACE="${ZMK_WORKSPACE:-$NXTKB_ROOT/zmkfirmware/zmk}"
FIRMWARE_DIR="${FIRMWARE_DIR:-$SOFLE_PRO_ROOT/firmware}"
ZMK_CONFIG_DIR="$SOFLE_PRO_ROOT/config"
EXTRA_MODULES="${EXTRA_MODULES:-$SOFLE_PRO_ROOT;$NXTKB_ROOT/zmk-vfx-sweep-pro-display;$NXTKB_ROOT/zmk-driver-azoteq-iqs5xx;$NXTKB_ROOT/zmk-behavior-report;$NXTKB_ROOT/zmk-behavior-send-string}"

if [[ -d "$HOME/miniforge3/bin" ]]; then
    export PATH="$HOME/miniforge3/bin:$PATH"
fi

if [[ -f "$ZMK_WORKSPACE/.venv/bin/activate" ]]; then
    # shellcheck disable=SC1091
    source "$ZMK_WORKSPACE/.venv/bin/activate"
fi

mkdir -p "$FIRMWARE_DIR"
rm -f "$FIRMWARE_DIR"/*.uf2

cd "$ZMK_WORKSPACE"

build_dongle() {
    west build -s app -p -d build/sofle_pro_dongle -b nice_nano//zmk \
        -S studio-rpc-usb-uart -- \
        -DSHIELD="sofle_pro_dongle sweep_display" \
        -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
        -DZMK_CONFIG="$ZMK_CONFIG_DIR"

    cp build/sofle_pro_dongle/zephyr/zmk.uf2 "$FIRMWARE_DIR/sofle_pro_dongle.uf2"
}

build_left() {
    west build -s app -p -d build/sofle_pro_left_peripheral -b nice_nano//zmk -- \
        -DSHIELD=sofle_pro_left \
        -DCONFIG_ZMK_SPLIT=y \
        -DCONFIG_ZMK_SPLIT_ROLE_CENTRAL=n \
        -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
        -DZMK_CONFIG="$ZMK_CONFIG_DIR"

    cp build/sofle_pro_left_peripheral/zephyr/zmk.uf2 "$FIRMWARE_DIR/sofle_pro_left_peripheral.uf2"
}

build_right() {
    west build -s app -p -d build/sofle_pro_right_peripheral -b nice_nano//zmk -- \
        -DSHIELD=sofle_pro_right \
        -DCONFIG_ZMK_SPLIT=y \
        -DCONFIG_ZMK_SPLIT_ROLE_CENTRAL=n \
        -DZMK_EXTRA_MODULES="$EXTRA_MODULES" \
        -DZMK_CONFIG="$ZMK_CONFIG_DIR"

    cp build/sofle_pro_right_peripheral/zephyr/zmk.uf2 "$FIRMWARE_DIR/sofle_pro_right_peripheral.uf2"
}

targets=("$@")
if [[ ${#targets[@]} -eq 0 ]]; then
    targets=(dongle left right)
fi

for target in "${targets[@]}"; do
    case "$target" in
        dongle|sofle_pro_dongle)
            build_dongle
            ;;
        left|sofle_pro_left|sofle_pro_left_peripheral)
            build_left
            ;;
        right|sofle_pro_right|sofle_pro_right_peripheral)
            build_right
            ;;
        all)
            build_dongle
            build_left
            build_right
            ;;
        *)
            echo "Unknown target: $target" >&2
            echo "Usage: $0 [dongle] [left] [right] [all]" >&2
            exit 2
            ;;
    esac
done

echo "Firmware written to $FIRMWARE_DIR"
