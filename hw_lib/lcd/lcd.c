#include <inttypes.h>
#include "stm32l1xx_hal.h"
#include "stm32l1xx_hal_lcd.h"

#include "lcd.h"

extern LCD_HandleTypeDef hlcd;
uint32_t lcd_segment_buffer[8];

// transfer the LCD buffer to LCD RAM and trigger an update
void lcd_update() {
    for (int i=0; i<8; i++) {
        HAL_LCD_Write(&hlcd, i, 0, lcd_segment_buffer[i]);
    }
    HAL_LCD_UpdateDisplayRequest(&hlcd);
}
