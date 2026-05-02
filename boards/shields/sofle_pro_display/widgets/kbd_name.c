/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include "kbd_name.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

int sofle_pro_widget_kbd_name_init(struct sofle_pro_widget_kbd_name *widget, lv_obj_t *parent) {
    widget->obj = lv_label_create(parent);

    // 设置文本为 CONFIG_ZMK_KEYBOARD_NAME
    lv_label_set_text(widget->obj, CONFIG_ZMK_KEYBOARD_NAME);
    // 设置字体为 sofle_pro_font_14_roboto_extra_bold
    lv_obj_set_style_text_font(widget->obj, &lv_font_montserrat_14, LV_PART_MAIN);
    sys_slist_append(&widgets, &widget->node);
    return 0;
}

lv_obj_t *sofle_pro_widget_kbd_name_obj(struct sofle_pro_widget_kbd_name *widget) { return widget->obj; }
