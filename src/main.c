#include "bes/board.h"
#include "bes/gpio.h"
#include "bes/time.h"
#include "bes/log.h"
#include "bes/display.h"


#include <stdio.h>

void app_main(void)
{
    bes_log("BES-Embedded booted");

    bes_display_init();

    bes_display_print("Hello BES");

    while(1)
    {
        bes_delay(1000);
    }
}