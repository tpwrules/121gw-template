#ifndef HW_LIB_LCD_DIGIT_TABLES_H
#define HW_LIB_LCD_DIGIT_TABLES_H

#include <inttypes.h>

#include "segments.h"

// tables for ascii chars to 7 segments
// stored in xGFEDCBA order
static const uint8_t lcd_ascii_uppercase[26] = {
    119,
    124,
    57,
    94,
    121,
    113,
    111,
    118,
    6,
    30,
    114,
    56,
    127,
    55,
    63,
    115,
    103,
    49,
    109,
    120,
    62,
    62,
    62,
    100,
    110,
    73
};

static const uint8_t lcd_ascii_lowercase[26] = {
    119,
    124,
    88,
    94,
    121,
    113,
    111,
    116,
    4,
    30,
    114,
    56,
    127,
    84,
    92,
    115,
    103,
    80,
    109,
    120,
    28,
    28,
    28,
    100,
    110,
    73
};

static const uint8_t lcd_ascii_numbers[10] = {
    63,
    6,
    91,
    79,
    102,
    109,
    125,
    39,
    127,
    111
};

// tables to map 7 segment segments to the screen
// 0-4: sub screen, left to right
// 5-9: main screen, left to right
static const uint8_t lcd_7seg_segments[10][7] = {
    {SEG_SS_10000_A, SEG_SS_10000_B, SEG_SS_10000_C, SEG_SS_10000_D,
        SEG_SS_10000_E, SEG_SS_10000_F, SEG_SS_10000_G},
    {SEG_SS_1000_A, SEG_SS_1000_B, SEG_SS_1000_C, SEG_SS_1000_D,
        SEG_SS_1000_E, SEG_SS_1000_F, SEG_SS_1000_G},
    {SEG_SS_100_A, SEG_SS_100_B, SEG_SS_100_C, SEG_SS_100_D,
        SEG_SS_100_E, SEG_SS_100_F, SEG_SS_100_G},
    {SEG_SS_10_A, SEG_SS_10_B, SEG_SS_10_C, SEG_SS_10_D,
        SEG_SS_10_E, SEG_SS_10_F, SEG_SS_10_G},
    {SEG_SS_1_A, SEG_SS_1_B, SEG_SS_1_C, SEG_SS_1_D,
        SEG_SS_1_E, SEG_SS_1_F, SEG_SS_1_G},

    {SEG_MS_10000_A, SEG_MS_10000_B, SEG_MS_10000_C, SEG_MS_10000_D,
        SEG_MS_10000_E, SEG_MS_10000_F, SEG_MS_10000_G},
    {SEG_MS_1000_A, SEG_MS_1000_B, SEG_MS_1000_C, SEG_MS_1000_D,
        SEG_MS_1000_E, SEG_MS_1000_F, SEG_MS_1000_G},
    {SEG_MS_100_A, SEG_MS_100_B, SEG_MS_100_C, SEG_MS_100_D,
        SEG_MS_100_E, SEG_MS_100_F, SEG_MS_100_G},
    {SEG_MS_10_A, SEG_MS_10_B, SEG_MS_10_C, SEG_MS_10_D,
        SEG_MS_10_E, SEG_MS_10_F, SEG_MS_10_G},
    {SEG_MS_1_A, SEG_MS_1_B, SEG_MS_1_C, SEG_MS_1_D,
        SEG_MS_1_E, SEG_MS_1_F, SEG_MS_1_G}
};

#endif