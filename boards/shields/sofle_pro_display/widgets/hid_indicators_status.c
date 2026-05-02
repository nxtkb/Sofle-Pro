
/*
 *
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <string.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include "hid_indicators_status.h"
#include <zmk/display.h>
#include <zmk/events/hid_indicators_changed.h>
#include <zmk/hid_indicators.h>

#define ZMK_LED_NUMLOCK_BIT BIT(0)
#define ZMK_LED_CAPSLOCK_BIT BIT(1)
#define ZMK_LED_SCROLLLOCK_BIT BIT(2)

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);
LV_FONT_DECLARE(sofle_pro_font_12_roboto_extra_bold);

struct hid_indicators_status_state {
  zmk_hid_indicators_t flags; // HID Indicator Status Bit Mask
};

static void
set_hid_indicators_symbol(lv_obj_t *label,
                          struct hid_indicators_status_state state) {
  char text[8];
  if (state.flags & ZMK_LED_CAPSLOCK_BIT) {
    strncpy(text, "CAPS", sizeof(text));
    text[sizeof(text) - 1] = '\0';
  } else {
    strncpy(text, "----", sizeof(text));
    text[sizeof(text) - 1] = '\0';
  }
  lv_label_set_text(label, text);
}

static void
hid_indicators_status_update_cb(struct hid_indicators_status_state state) {
  struct zmk_widget_hid_indicators_status *widget;
  SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
    set_hid_indicators_symbol(widget->obj, state);
  }
}

static struct hid_indicators_status_state
hid_indicators_status_get_state(const zmk_event_t *eh) {
  return (struct hid_indicators_status_state){
      .flags = zmk_hid_indicators_get_current_profile()};
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_hid_indicators_status,
                            struct hid_indicators_status_state,
                            hid_indicators_status_update_cb,
                            hid_indicators_status_get_state)

ZMK_SUBSCRIPTION(widget_hid_indicators_status, zmk_hid_indicators_changed);

int zmk_widget_hid_indicators_status_init(
    struct zmk_widget_hid_indicators_status *widget, lv_obj_t *parent) {
  widget->obj = lv_label_create(parent);

  // 只设置一次样式
  lv_obj_set_style_text_font(widget->obj, &sofle_pro_font_12_roboto_extra_bold,
                             LV_PART_MAIN);

  sys_slist_append(&widgets, &widget->node);
  widget_hid_indicators_status_init();
  return 0;
}

lv_obj_t *zmk_widget_hid_indicators_status_obj(
    struct zmk_widget_hid_indicators_status *widget) {
  return widget->obj;
}
