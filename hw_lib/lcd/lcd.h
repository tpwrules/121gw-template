#ifndef HW_LIB_LCD_H
#define HW_LIB_LCD_H

/*
    This file contains functions to perform tasks on the LCD.
*/

#include "segments.h"

extern uint32_t lcd_segment_buffer[8];

// update the LCD from the segment buffer
void lcd_update();

// turn on and off segments
#define LCD_SEGON(seg) \
    (lcd_segment_buffer[LCD_RAM(seg)] |= LCD_SMASK_ON(seg))
#define LCD_SEGOFF(seg) \
    (lcd_segment_buffer[LCD_RAM(seg)] &= LCD_SMASK_OFF(seg))
#define LCD_SEGSET(seg, val)\
    (val ? LCD_SEGON(seg) : LCD_SEGOFF(seg))

#endif
