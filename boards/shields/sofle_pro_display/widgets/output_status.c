/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include "output_status.h"
#include <zmk/ble.h>
#include <zmk/display.h>
#include <zmk/endpoints.h>
#include <zmk/event_manager.h>
#include <zmk/events/ble_active_profile_changed.h>
#include <zmk/events/endpoint_changed.h>
#include <zmk/usb.h>

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

LV_FONT_DECLARE(sofle_pro_lv_custom_symbol);

#define LV_SYMBOL_LOCK "\xEF\x80\xA3"
#define LV_SYMBOL_UNLOCK "\xEF\x8F\x81"
#define LV_SYMBOL_BLUETOOTH_1 "\xEF\x8A\x93"

struct output_status_state {
  struct zmk_endpoint_instance selected_endpoint;
  bool active_profile_connected;
  bool active_profile_bonded;
};

static struct output_status_state get_state(const zmk_event_t *_eh) {
  return (struct output_status_state){
      .selected_endpoint = zmk_endpoint_get_selected(),
      .active_profile_connected = zmk_ble_active_profile_is_connected(),
      .active_profile_bonded = !zmk_ble_active_profile_is_open()};
}

static void set_status_symbol(lv_obj_t *label,
                              struct output_status_state state) {
  // 设置label使用自定义符号字体

  char text[40] = {};
  switch (state.selected_endpoint.transport) {
  case ZMK_TRANSPORT_USB:
    snprintf(text, sizeof(text), LV_SYMBOL_USB);
    break;
  case ZMK_TRANSPORT_NONE:
  case ZMK_TRANSPORT_BLE: {
    int idx = zmk_ble_active_profile_index();

    if (state.active_profile_bonded) {
      if (state.active_profile_connected) {
        // 已配对且已连接
        snprintf(text, sizeof(text),
                 LV_SYMBOL_BLUETOOTH_1 " %i  " LV_SYMBOL_OK, idx + 1);
      } else {
        // 已配对但未连接
        snprintf(text, sizeof(text),
                 LV_SYMBOL_BLUETOOTH_1 " %i " LV_SYMBOL_LOCK
                                       " " LV_SYMBOL_CLOSE,
                 idx + 1);
      }
    } else {
      // 未配对
      snprintf(text, sizeof(text),
               LV_SYMBOL_BLUETOOTH_1 " %i " LV_SYMBOL_UNLOCK, idx + 1);
    }
    break;
  }
  }

  // 设置text的颜色为白色，字体大小为22
  // lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);

  lv_label_set_text(label, text);
}

static void output_status_update_cb(struct output_status_state state) {
  struct zmk_widget_output_status *widget;
  SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
    set_status_symbol(widget->obj, state);
  }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_output_status, struct output_status_state,
                            output_status_update_cb, get_state)
ZMK_SUBSCRIPTION(widget_output_status, zmk_endpoint_changed);
// We don't get an endpoint changed event when the active profile
// connects/disconnects but there wasn't another endpoint to switch from/to, so
// update on BLE events too.
#if defined(CONFIG_ZMK_BLE)
ZMK_SUBSCRIPTION(widget_output_status, zmk_ble_active_profile_changed);
#endif

int zmk_widget_output_status_init(struct zmk_widget_output_status *widget,
                                  lv_obj_t *parent) {
  widget->obj = lv_label_create(parent);
  lv_obj_set_style_text_font(widget->obj, &sofle_pro_lv_custom_symbol, LV_PART_MAIN);
  sys_slist_append(&widgets, &widget->node);

  widget_output_status_init();
  return 0;
}

lv_obj_t *
zmk_widget_output_status_obj(struct zmk_widget_output_status *widget) {
  return widget->obj;
}
