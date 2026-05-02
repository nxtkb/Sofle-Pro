/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef CUSTOM_STATUS_SCREEN_H
#define CUSTOM_STATUS_SCREEN_H

#include <lvgl.h>

/* * 声明 ZMK 状态屏幕初始化函数
 * 当 CONFIG_ZMK_DISPLAY_STATUS_SCREEN_CUSTOM=y 时，
 * ZMK 核心会调用这个函数来获取屏幕对象。
 */
lv_obj_t *zmk_display_status_screen();

#endif /* CUSTOM_STATUS_SCREEN_H */