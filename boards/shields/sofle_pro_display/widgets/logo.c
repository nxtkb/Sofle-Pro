/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include "logo.h"
#include <zmk/display.h>

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

LV_FONT_DECLARE(sofle_pro_font_18_big_john);
LV_FONT_DECLARE(sofle_pro_font_14_roboto_extra_bold);

int sofle_pro_widget_logo_init(struct sofle_pro_widget_logo *widget, lv_obj_t *parent) {
  // 创建主容器，垂直排列
  lv_obj_t *main_container = lv_obj_create(parent);
  lv_obj_set_layout(main_container, LV_LAYOUT_FLEX);
  lv_obj_set_flex_flow(main_container, LV_FLEX_FLOW_COLUMN);
  lv_obj_set_style_pad_gap(main_container, 4, 0); // 上下间距2像素
  lv_obj_set_style_pad_all(main_container, 0, 0);
  lv_obj_set_height(main_container, 30);
  lv_obj_set_width(main_container, lv_obj_get_width(parent));
  lv_obj_set_style_border_width(main_container, 0, 0);

  // 设置交叉轴的对齐方式，使图像和文本垂直居中
  lv_obj_set_flex_align(main_container, LV_FLEX_ALIGN_CENTER,
                        LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

  // widget->obj 指向主容器
  widget->obj = main_container;

  // 第一行：水平排列的子容器，放图像和"NXT kb"
  lv_obj_t *row_container = lv_obj_create(main_container);
  lv_obj_set_layout(row_container, LV_LAYOUT_FLEX);
  lv_obj_set_flex_flow(row_container, LV_FLEX_FLOW_ROW);
  lv_obj_set_style_pad_gap(row_container, 5, 0);
  lv_obj_set_height(row_container, 30);
  lv_obj_set_style_pad_all(row_container, 0, 0);
  lv_obj_set_style_border_width(row_container, 0, 0);

  // 创建图片对象并添加到 row_container
  lv_obj_t *image = lv_image_create(row_container);
  // 设置图片的圆角
  lv_obj_set_style_radius(image, 5, 0);
  LV_IMG_DECLARE(sofle_pro_logo_img);
  lv_image_set_src(image, &sofle_pro_logo_img);

  // 创建文本标签，显示 "NXT kb"
  lv_obj_t *label = lv_label_create(row_container);
  lv_label_set_text(label, "NXTkb");
  lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_LEFT, 0);
  lv_obj_set_style_text_font(label, &sofle_pro_font_18_big_john, LV_PART_MAIN);
  // 交叉轴对齐方式
  lv_obj_set_flex_align(row_container, LV_FLEX_ALIGN_CENTER,
                        LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

  // // 第二行：添加 "github.com/nxtkb/Sofle-Pro" 文本
  // lv_obj_t *label2 = lv_label_create(main_container);
  // lv_label_set_text(label2, ".com");
  // // 可选：设置字体、颜色等样式
  // lv_obj_set_style_text_font(label2, &sofle_pro_font_14_roboto_extra_bold,
  // LV_PART_MAIN);

  // // 让 label2 占满宽度并右对齐
  // lv_obj_set_width(label2, LV_PCT(100));
  // lv_obj_set_style_text_align(label2, LV_TEXT_ALIGN_RIGHT, 0);
  // lv_obj_set_style_pad_right(label2, 25, 0); // 可选，增加右边距
  // // 设置文字在容器的最右边

  sys_slist_append(&widgets, &widget->node);
  return 0;
}

lv_obj_t *sofle_pro_widget_logo_obj(struct sofle_pro_widget_logo *widget) {
  return widget->obj;
}
