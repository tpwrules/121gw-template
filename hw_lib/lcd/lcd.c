#include <inttypes.h>
#include "stm32l1xx_hal.h"
#include "stm32l1xx_hal_lcd.h"

#include "lcd.h"
#include "digit_tables.h"

extern LCD_HandleTypeDef hlcd;
uint32_t lcd_segment_buffer[8];

// transfer the LCD buffer to LCD RAM and trigger an update
void lcd_update() {
    for (int i=0; i<8; i++) {
        HAL_LCD_Write(&hlcd, i, 0, lcd_segment_buffer[i]);
    }
    HAL_LCD_UpdateDisplayRequest(&hlcd);
}

// set a character on one of the LCD's 7 segment displays
// 0-4: sub screen, left to right
// 5-9: main screen, left to right
void lcd_set_char(uint8_t where, char c) {
    // first step: look up the char and get its segments
    uint8_t segs;
    if (c >= 'A' && c <= 'Z') {
        segs = lcd_ascii_uppercase[c-'A'];
    } else if (c >= 'a' && c <= 'z') {
        segs = lcd_ascii_lowercase[c-'a'];
    } else if (c >= '0' && c <= '9') {
        segs = lcd_ascii_numbers[c-'0'];
    } else {
        switch (c) {
            case '=':
                segs = 9;
                break;
            case '-':
                segs = 64;
                break;
            case ' ':
            default:
                segs = 0;
        }
    }

    // now set them accordingly
    for (int i=0; i<7; i++) {
        LCD_SEGSET(lcd_7seg_segments[where][i],
            segs & 1);
        segs >>= 1;
    }
}

// write a string to a screen
// 0: main, 1: sub
// any longer than 5 chars is truncated
// any shorter is set to space
void lcd_put_str(uint8_t on_subscreen, char* s) {
    uint8_t where = 5;
    if (on_subscreen)
        where = 0;

    for (int i=0; i<5; i++) {
        char c = *s;
        lcd_set_char(where++, c);
        if (c)
            s++;
    }
}