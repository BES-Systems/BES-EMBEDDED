#ifndef BES_BOARD_H
#define BES_BOARD_H

// #define BES_LED_PIN 4

void bes_board_init(void);

int bes_board_led_pin(void);

int bes_board_display_backlight_pin(void);

const char *bes_board_name(void);

#endif