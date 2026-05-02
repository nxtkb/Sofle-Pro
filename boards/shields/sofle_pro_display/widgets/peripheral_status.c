/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include "peripheral_status.h"
#include <zmk/display.h>
#include <zmk/split/transport/central.h>
#include <zmk/split/transport/types.h>

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

LV_FONT_DECLARE(sofle_pro_lv_custom_symbol);

#define LV_SYMBOL_KEYBOARD_1 "\xEF\x84\x9C"

extern const struct zmk_split_transport_central *active_transport;

static bool peripheral_connected(void) {
  if (active_transport == NULL || active_transport->api == NULL ||
      active_transport->api->get_status == NULL) {
    return false;
  }

  struct zmk_split_transport_status status =
      active_transport->api->get_status();
  return status.enabled &&
         status.connections != ZMK_SPLIT_TRANSPORT_CONNECTIONS_STATUS_DISCONNECTED;
}

static void set_status_symbol(lv_obj_t *label, bool connected) {
  char text[64];
  if (connected) {
    snprintf(text, sizeof(text), "%s %s %s", LV_SYMBOL_KEYBOARD_1,
             LV_SYMBOL_MINUS, LV_SYMBOL_KEYBOARD_1);
  } else {
    snprintf(text, sizeof(text), "%s %s %s", LV_SYMBOL_KEYBOARD_1,
             LV_SYMBOL_MINUS, LV_SYMBOL_CLOSE);
  }

  lv_label_set_text(label, text);
}

static void refresh_widgets(void) {
  struct zmk_widget_peripheral_status *widget;
  SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
    set_status_symbol(widget->obj, peripheral_connected());
  }
}

static void refresh_work_cb(struct k_work *work);
K_WORK_DELAYABLE_DEFINE(refresh_work, refresh_work_cb);

static void refresh_work_cb(struct k_work *work) {
  refresh_widgets();
  k_work_reschedule(&refresh_work, K_SECONDS(1));
}

int zmk_widget_peripheral_status_init(
    struct zmk_widget_peripheral_status *widget, lv_obj_t *parent) {
  widget->obj = lv_label_create(parent);
  lv_obj_set_style_text_font(widget->obj, &sofle_pro_lv_custom_symbol, LV_PART_MAIN);

  sys_slist_append(&widgets, &widget->node);

  refresh_widgets();
  k_work_reschedule(&refresh_work, K_NO_WAIT);
  return 0;
}

lv_obj_t *
zmk_widget_peripheral_status_obj(struct zmk_widget_peripheral_status *widget) {
  return widget->obj;
}
