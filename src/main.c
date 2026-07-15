#include "bes/board.h"
#include "bes/gpio.h"
#include "bes/time.h"
#include "bes/log.h"
#include "bes/display.h"
#include "bes/splash.h"
#include "bes/boot.h"



#include <stdio.h>

void app_main(void)
{
    bes_boot_start();

    while(1)
    {
        bes_delay(1000);
    }
}