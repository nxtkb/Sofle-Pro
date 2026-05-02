/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --font
 *FontAwesome5-Solid+Brands+Regular.woff --range 61475,62100,62401 --format lvgl
 *-o sofle_pro_lv_custom_symbol.c
 ******************************************************************************/

#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_CUSTOM_SYMBOL
#define LV_CUSTOM_SYMBOL 1
#endif
#if LV_CUSTOM_SYMBOL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+F023 "" */
    0xf, 0x1, 0xf8, 0x39, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+F11C "" */
    0xff, 0xff, 0xff, 0xff, 0xca, 0x53, 0xca, 0x53, 0xff, 0xff, 0xe5, 0xa7, 0xe5, 0xa7, 0xff, 0xff,
    0xc8, 0x13, 0xff, 0xff, 0xff, 0xff,

    /* U+F293 "" */
    0x1f, 0xf, 0xf1, 0xef, 0x7c, 0xec, 0xad, 0xc1, 0xfc, 0x7f, 0x8f, 0xe0, 0xf9, 0x4b, 0xe3, 0x3c,
    0xe7, 0xb8, 0x3e, 0x0,

    /* U+F294 "" */
    0x10, 0x30, 0x64, 0xad, 0x4f, 0x8e, 0x1c, 0x7d, 0xae, 0x50, 0xc1, 0x0, 0x0,

    /* U+F3C1 "" */
    0x0, 0x3c, 0x0, 0xfe, 0x0, 0xc7, 0x1, 0xc3, 0x1, 0x83, 0x1, 0x83, 0xff, 0xf3, 0xff, 0xf0, 0xff,
    0xf0, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xf0};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0,
     .adv_w = 0,
     .box_w = 0,
     .box_h = 0,
     .ofs_x = 0,
     .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 196, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 21, .adv_w = 252, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 196, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 63, .adv_w = 140, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 76, .adv_w = 252, .box_w = 16, .box_h = 14, .ofs_x = 0, .ofs_y = -2}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {0x0, 0xf9, 0x270, 0x271, 0x39e};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {{.range_start = 61475,
                                                .range_length = 927,
                                                .glyph_id_start = 1,
                                                .unicode_list = unicode_list_0,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 5,
                                                .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};

extern const lv_font_t lv_font_montserrat_14;

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t sofle_pro_lv_custom_symbol = {
#else
lv_font_t sofle_pro_lv_custom_symbol = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 14,                              /*The maximum line height required by the font*/
    .base_line = 2, /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -5,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc, /*The custom font data. Will be accessed by
                         `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = &lv_font_montserrat_14,
#endif
    .user_data = NULL,
};

#endif /*#if LV_CUSTOM_SYMBOL*/
