#ifndef BES_DISPLAY_H
#define BES_DISPLAY_H

#include <stdint.h>

/**
 * Initialize the BES display driver
 */
void bes_display_init(void);

/**
 * Enable display + backlight
 */
void bes_display_on(void);

/**
 * Disable display + backlight
 */
void bes_display_off(void);

/**
 * Print text to the display
 */
void bes_display_print(const char *text);

/**
 * Fill the entire display with RGB565 color
 *
 * Example:
 * 0xF800 = Red
 * 0x07E0 = Green
 * 0x001F = Blue
 * 0x0000 = Black
 * 0xFFFF = White
 */
void bes_display_fill(uint16_t color);

#endif