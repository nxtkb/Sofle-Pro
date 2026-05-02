/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

struct sofle_pro_widget_logo {
    sys_snode_t node;
    lv_obj_t *obj;
};

int sofle_pro_widget_logo_init(struct sofle_pro_widget_logo *widget, lv_obj_t *parent);
lv_obj_t *sofle_pro_widget_logo_obj(struct sofle_pro_widget_logo *widget);