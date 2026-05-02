/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --font ZQKfreefont-2.ttf --symbols
 *ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz.,=+-_:/ --format lvgl -o sofle_pro_font_14_zqk.c
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

#ifndef FONT_14_ZQK
#define FONT_14_ZQK 1
#endif

#if FONT_14_ZQK

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+002B "+" */
    0x18, 0x30, 0x67, 0xff, 0xe3, 0x6, 0x0,

    /* U+002C "," */
    0xfe,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x61, 0x84, 0x30, 0xc6, 0x18, 0x63, 0x0,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003D "=" */
    0xff, 0xf0, 0x0, 0xff, 0xf0,

    /* U+0041 "A" */
    0x1c, 0xe, 0x7, 0x87, 0xc3, 0x61, 0xb1, 0xdc, 0xf6, 0x7b, 0x31, 0xc0,

    /* U+0042 "B" */
    0xfd, 0xff, 0x1e, 0x3f, 0xdf, 0xb1, 0xe3, 0xff, 0xf8,

    /* U+0043 "C" */
    0x7f, 0xff, 0x6, 0xc, 0x18, 0x30, 0x60, 0xfe, 0xfc,

    /* U+0044 "D" */
    0xfd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xff, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0x6, 0xf, 0xff, 0xb0, 0x60, 0xff, 0xfc,

    /* U+0046 "F" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xff, 0x60, 0xc1, 0x80,

    /* U+0047 "G" */
    0x7f, 0xff, 0x6, 0xd, 0xfb, 0xf1, 0xe3, 0xfe, 0xf8,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xff, 0xf1, 0xe3, 0xc7, 0x8c,

    /* U+0049 "I" */
    0xff, 0x66, 0x66, 0x66, 0xff,

    /* U+004A "J" */
    0x77, 0x33, 0x33, 0x33, 0x76,

    /* U+004B "K" */
    0xcf, 0x9b, 0x66, 0xcf, 0x1e, 0x36, 0x6c, 0xcd, 0x9c,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xff, 0xfc,

    /* U+004D "M" */
    0xc1, 0xf1, 0xf8, 0xfe, 0xff, 0x7f, 0xff, 0x77, 0xbb, 0xc1, 0xe0, 0xc0,

    /* U+004E "N" */
    0xc7, 0xcf, 0x9f, 0xbf, 0x7b, 0xf7, 0xe7, 0xcf, 0x8c,

    /* U+004F "O" */
    0x7c, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x7c, 0xf8,

    /* U+0050 "P" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xff, 0x60, 0xc1, 0x80,

    /* U+0051 "Q" */
    0x7c, 0xfb, 0x1e, 0x3c, 0x78, 0xf7, 0xef, 0x7e, 0xfc,

    /* U+0052 "R" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xf7, 0x6e, 0xcd, 0x8c,

    /* U+0053 "S" */
    0x7f, 0xff, 0x6, 0xf, 0xcf, 0xc1, 0x83, 0xff, 0xf8,

    /* U+0054 "T" */
    0xff, 0xfc, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x30,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x7c, 0xf8,

    /* U+0056 "V" */
    0x63, 0x31, 0x98, 0xce, 0xe3, 0x61, 0xb0, 0xf8, 0x38, 0x1c, 0xe, 0x0,

    /* U+0057 "W" */
    0x60, 0x6c, 0xcd, 0x99, 0xb7, 0x67, 0xfc, 0x7f, 0x8f, 0xf1, 0xde, 0x39, 0x83, 0x30,

    /* U+0058 "X" */
    0x67, 0x76, 0x3e, 0x3c, 0x1c, 0x1c, 0x3c, 0x3e, 0x76, 0x67,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xfe, 0xfc, 0x38, 0xe1, 0x86, 0x1c, 0x70, 0xff, 0xfc,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0061 "a" */
    0x7f, 0xff, 0x1e, 0x3c, 0xff, 0xdd, 0x80,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xef, 0xf8, 0xf1, 0xe3, 0xff, 0xf8,

    /* U+0063 "c" */
    0x7f, 0xff, 0x6, 0xc, 0x1f, 0xdf, 0x80,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xff, 0xf8, 0xf1, 0xe3, 0xfe, 0xfc,

    /* U+0065 "e" */
    0x7d, 0xff, 0x1f, 0xff, 0xdf, 0xdf, 0x80,

    /* U+0066 "f" */
    0x3b, 0xd9, 0xff, 0xb1, 0x8c, 0x63, 0x0,

    /* U+0067 "g" */
    0x7f, 0xff, 0x1e, 0x3f, 0xef, 0xc1, 0xff, 0x7c,

    /* U+0068 "h" */
    0xc1, 0x83, 0x7, 0xef, 0xf8, 0xf1, 0xe3, 0xc7, 0x8c,

    /* U+0069 "i" */
    0xf3, 0xff, 0xf0,

    /* U+006A "j" */
    0x6c, 0x36, 0xdb, 0x6f, 0xe0,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6d, 0xdb, 0x3c, 0x6c, 0xdd, 0x98,

    /* U+006C "l" */
    0xdb, 0x6d, 0xb6, 0xec,

    /* U+006D "m" */
    0x7f, 0xbf, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c, 0xcc,

    /* U+006E "n" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+006F "o" */
    0x7d, 0xff, 0x1e, 0x3c, 0x7f, 0xdf, 0x0,

    /* U+0070 "p" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xff, 0x60, 0xc0,

    /* U+0071 "q" */
    0x7f, 0xff, 0x1e, 0x3c, 0x7f, 0xdf, 0x83, 0x6,

    /* U+0072 "r" */
    0xdf, 0xfd, 0x8c, 0x63, 0x0,

    /* U+0073 "s" */
    0x7f, 0xff, 0x7, 0xe7, 0xff, 0xff, 0x0,

    /* U+0074 "t" */
    0x67, 0xfe, 0xc6, 0x31, 0xe7,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x7f, 0xdf, 0x0,

    /* U+0076 "v" */
    0x66, 0x66, 0x76, 0x3c, 0x3c, 0x3c, 0x18,

    /* U+0077 "w" */
    0x60, 0xdb, 0xb6, 0xed, 0xff, 0x3b, 0x8e, 0xe3, 0xb8,

    /* U+0078 "x" */
    0x66, 0x7e, 0x3c, 0x18, 0x3c, 0x7e, 0x66,

    /* U+0079 "y" */
    0xc7, 0x8f, 0x1f, 0xf7, 0xe0, 0xc1, 0xff, 0x7c,

    /* U+007A "z" */
    0xfe, 0xfc, 0x71, 0xc7, 0x1f, 0xff, 0x80};

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
    {.bitmap_index = 0, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 7, .adv_w = 60, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8, .adv_w = 100, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 9, .adv_w = 64, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 94, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 60, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 20, .adv_w = 129, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 25, .adv_w = 147, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 80, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 74, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 159, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 135, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 187, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 135, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 99, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 269, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 323, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 49, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 49, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 340, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 73, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 169, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 384, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 392, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 93, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 174, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 127, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 447, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {0x0, 0x1, 0x2, 0x3, 0x4, 0xf, 0x12};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {{.range_start = 43,
                                                .range_length = 19,
                                                .glyph_id_start = 1,
                                                .unicode_list = unicode_list_0,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 7,
                                                .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
                                               {.range_start = 65,
                                                .range_length = 26,
                                                .glyph_id_start = 8,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start = 95,
                                                .range_length = 1,
                                                .glyph_id_start = 34,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start = 97,
                                                .range_length = 26,
                                                .glyph_id_start = 35,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY}};

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
    .cmap_num = 4,
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
const lv_font_t sofle_pro_font_14_zqk = {
#else
lv_font_t sofle_pro_font_14_zqk = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 12,                              /*The maximum line height required by the font*/
    .base_line = 2, /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = &lv_font_montserrat_14,
#endif
    .user_data = NULL,
};

#endif /*#if FONT_14_ZQK*/
