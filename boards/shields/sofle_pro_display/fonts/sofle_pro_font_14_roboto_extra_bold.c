/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --font Roboto-ExtraBold.ttf --symbols
 *ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz.,=+-_:/1234567890 --format lvgl -o
 *sofle_pro_font_14_roboto_extra_bold.c
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
#ifndef FONT_14_ROBOTO_EXTRA_BOLD
#define FONT_14_ROBOTO_EXTRA_BOLD 1
#endif

#if FONT_14_ROBOTO_EXTRA_BOLD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6d, 0xe4,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x18, 0x84, 0x63, 0x11, 0x8c, 0x46, 0x31, 0x0,

    /* U+0030 "0" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6, 0xf8, 0xe0,

    /* U+0031 "1" */
    0x1b, 0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6,

    /* U+0032 "2" */
    0x3c, 0xff, 0x9e, 0x30, 0x61, 0x86, 0x18, 0x71, 0xff, 0xf8,

    /* U+0033 "3" */
    0x3c, 0xfd, 0x98, 0x31, 0xe3, 0x83, 0x83, 0x66, 0xfc, 0xf0,

    /* U+0034 "4" */
    0xc, 0x38, 0x71, 0xe2, 0xcd, 0xb3, 0x7f, 0xfe, 0x18, 0x30,

    /* U+0035 "5" */
    0x7e, 0xfd, 0x83, 0x7, 0xcf, 0xc1, 0x83, 0xe6, 0xfc, 0xf0,

    /* U+0036 "6" */
    0x1c, 0x79, 0x86, 0xd, 0xdf, 0xf1, 0xe3, 0xc6, 0xf8, 0xe0,

    /* U+0037 "7" */
    0xff, 0xfc, 0x18, 0x60, 0xc3, 0x6, 0x1c, 0x30, 0x61, 0x80,

    /* U+0038 "8" */
    0x7d, 0xff, 0x1e, 0x3e, 0xef, 0xbb, 0xe3, 0xc7, 0xfd, 0xf0,

    /* U+0039 "9" */
    0x38, 0xfb, 0x9e, 0x3c, 0x78, 0xdf, 0xbb, 0xc, 0xf9, 0xc0,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003D "=" */
    0xff, 0xf0, 0x3f, 0xfc,

    /* U+0041 "A" */
    0xc, 0xe, 0x7, 0x83, 0xc3, 0x61, 0x98, 0xcc, 0xfe, 0x7f, 0xb0, 0xf8, 0x60,

    /* U+0042 "B" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xbf, 0xe3, 0xc7, 0xff, 0xf0,

    /* U+0043 "C" */
    0x3c, 0x7e, 0xe3, 0xc3, 0xc0, 0xc0, 0xc0, 0xc3, 0xe3, 0x7e, 0x3c,

    /* U+0044 "D" */
    0xf8, 0xfe, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc6, 0xfe, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xbf, 0x60, 0xc1, 0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xbf, 0x60, 0xc1, 0x83, 0x0,

    /* U+0047 "G" */
    0x3c, 0x7e, 0xe3, 0xc3, 0xc0, 0xcf, 0xcf, 0xc3, 0xe3, 0x7f, 0x3e,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x66, 0xf8, 0xf0,

    /* U+004B "K" */
    0xc7, 0xce, 0xcc, 0xd8, 0xf8, 0xf8, 0xf8, 0xdc, 0xce, 0xc6, 0xc7,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0xff, 0xf8,

    /* U+004D "M" */
    0xe0, 0xfc, 0x1f, 0xc7, 0xf8, 0xfd, 0x17, 0xb6, 0xf6, 0xde, 0x53, 0xce, 0x79, 0xcf, 0x11, 0x80,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xf3, 0xfb, 0xdb, 0xdf, 0xcf, 0xc7, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe6, 0x7e, 0x3e, 0x7, 0x2,

    /* U+0052 "R" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xbf, 0x66, 0xcd, 0x8f, 0x18,

    /* U+0053 "S" */
    0x3c, 0x7e, 0x63, 0x60, 0x70, 0x1e, 0x7, 0x63, 0x63, 0x7f, 0x3e,

    /* U+0054 "T" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e, 0x3c,

    /* U+0056 "V" */
    0xe1, 0xf1, 0xd8, 0xcc, 0x67, 0x31, 0xb0, 0xd8, 0x6c, 0x1e, 0xe, 0x7, 0x0,

    /* U+0057 "W" */
    0xc6, 0x3e, 0x63, 0x67, 0x76, 0xf6, 0x6f, 0x66, 0xf6, 0x7d, 0x63, 0x9e, 0x39, 0xc3, 0x9c, 0x39,
    0xc0,

    /* U+0058 "X" */
    0xe3, 0x33, 0x9d, 0x86, 0xc3, 0xc0, 0xe0, 0xf0, 0x6c, 0x77, 0x31, 0xb8, 0xe0,

    /* U+0059 "Y" */
    0xc3, 0xe7, 0x66, 0x6e, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xff, 0x6, 0xe, 0x1c, 0x18, 0x38, 0x70, 0x70, 0xff, 0xff,

    /* U+005F "_" */
    0xff, 0xf0,

    /* U+0061 "a" */
    0x7b, 0xfc, 0xdf, 0xcf, 0x3f, 0xdf,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xef, 0xd8, 0xf1, 0xe3, 0xc7, 0xff, 0xf0,

    /* U+0063 "c" */
    0x38, 0xfb, 0x36, 0xc, 0x19, 0x9f, 0x1c,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xf7, 0xf8, 0xf1, 0xe3, 0xc6, 0xfd, 0xf8,

    /* U+0065 "e" */
    0x38, 0xfb, 0x1f, 0xff, 0xfc, 0x1f, 0x9e,

    /* U+0066 "f" */
    0x3b, 0xd9, 0xff, 0xb1, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7e, 0xff, 0x1e, 0x3c, 0x78, 0xdf, 0xbf, 0x47, 0xfc, 0xe0,

    /* U+0068 "h" */
    0xc3, 0xc, 0x3e, 0xff, 0x3c, 0xf3, 0xcf, 0x3c, 0xc0,

    /* U+0069 "i" */
    0xf3, 0xff, 0xfc,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0xfe,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6d, 0xdf, 0x3c, 0x7c, 0xd9, 0x9b, 0x38,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xfb, 0xdf, 0xff, 0x31, 0xe6, 0x3c, 0xc7, 0x98, 0xf3, 0x1e, 0x63,

    /* U+006E "n" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3,

    /* U+006F "o" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xdf, 0x1c,

    /* U+0070 "p" */
    0xfd, 0xfb, 0x1e, 0x3c, 0x78, 0xff, 0x7e, 0xc1, 0x83, 0x0,

    /* U+0071 "q" */
    0x7e, 0xff, 0x1e, 0x3c, 0x78, 0xdf, 0xbf, 0x6, 0xc, 0x18,

    /* U+0072 "r" */
    0xdf, 0xf1, 0x8c, 0x63, 0x18,

    /* U+0073 "s" */
    0x7b, 0xfc, 0xd8, 0x1b, 0x3f, 0xde,

    /* U+0074 "t" */
    0x66, 0xff, 0x66, 0x66, 0x73,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3f, 0xdf,

    /* U+0076 "v" */
    0xc7, 0x8d, 0xb3, 0x66, 0xcf, 0x8e, 0x1c,

    /* U+0077 "w" */
    0xcd, 0xb3, 0x6d, 0xd9, 0xf6, 0x77, 0x9d, 0xc7, 0x30, 0xcc,

    /* U+0078 "x" */
    0xe6, 0xd8, 0xf1, 0xc3, 0x8f, 0x9b, 0x73,

    /* U+0079 "y" */
    0xe6, 0xcd, 0xb3, 0x63, 0xc7, 0xe, 0xc, 0x38, 0xe1, 0x80,

    /* U+007A "z" */
    0xff, 0xf1, 0x8c, 0x71, 0x8f, 0xff};

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
    {.bitmap_index = 0, .adv_w = 121, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 8, .adv_w = 58, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 10, .adv_w = 95, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 11, .adv_w = 66, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 81, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 20, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 129, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 65, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 130, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 123, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 67, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 306, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 140, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 148, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 195, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 99, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 418, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 81, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 475, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 60, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 60, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 494, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 60, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 193, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 541, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 551, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 76, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 164, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 114, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 607, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {{.range_start = 43,
                                                .range_length = 16,
                                                .glyph_id_start = 1,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start = 61,
                                                .range_length = 1,
                                                .glyph_id_start = 17,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start = 65,
                                                .range_length = 26,
                                                .glyph_id_start = 18,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start = 95,
                                                .range_length = 1,
                                                .glyph_id_start = 44,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start = 97,
                                                .range_length = 26,
                                                .glyph_id_start = 45,
                                                .unicode_list = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] = {5, 5};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] = {-27};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs = {.glyph_ids = kern_pair_glyph_ids,
                                                       .values = kern_pair_values,
                                                       .pair_cnt = 1,
                                                       .glyph_ids_size = 0};

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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 5,
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
const lv_font_t sofle_pro_font_14_roboto_extra_bold = {
#else
lv_font_t sofle_pro_font_14_roboto_extra_bold = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 14,                              /*The maximum line height required by the font*/
    .base_line = 3, /*Baseline measured from the bottom of the line*/
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

#endif /*#if FONT_14_ROBOTO_EXTRA_BOLD*/
