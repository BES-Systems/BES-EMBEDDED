#include "bes/board.h"
#include "bes/gpio.h"
#include "bes/time.h"
#include "bes/log.h"

#include <stdio.h>

void app_main(void)
{
    bes_log("Embedded booted");
    
    bes_gpio_output(BES_LED_PIN);

    while(1)
    {
        printf("Hello BES!\n");

        bes_gpio_write(BES_LED_PIN, 1);
        bes_delay(500);

        bes_gpio_write(BES_LED_PIN, 0);
        bes_delay(500);
    }
}