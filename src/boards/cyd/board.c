#include "bes/board.h"
#include "board.h"

void bes_board_init(void)
{
    // configure anything board-specific
}

int bes_board_led_pin(void)
{
    return 4;
}

int bes_board_display_backlight_pin(void)
{
    return BES_PIN_LCD_BCKL;
}

const char *bes_board_name(void)
{
    return "ESP32-2432S028";
}