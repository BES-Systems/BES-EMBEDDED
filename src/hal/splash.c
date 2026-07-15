#include "bes/splash.h"
#include "bes/display.h"
#include "bes/time.h"


#define FLASH_DELAY 200


void bes_splash_show(void)
{
    // Black
    bes_display_fill(0x0000);

    bes_delay(FLASH_DELAY);


    // White flash
    bes_display_fill(0xFFFF);

    bes_delay(FLASH_DELAY);


    // Black again
    bes_display_fill(0x0000);

    bes_delay(FLASH_DELAY);


    // Blue flash
    bes_display_fill(0x001F);

    bes_delay(FLASH_DELAY);


    // Clear
    bes_display_fill(0x0000);
}