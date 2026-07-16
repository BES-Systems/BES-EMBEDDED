#include "bes/board.h"
#include "bes/gpio.h"
#include "bes/time.h"
#include "bes/log.h"
#include "bes/display.h"
#include "bes/splash.h"
#include "bes/boot.h"
#include "bes/color.h"
#include "bes/task.h"
#include "bes/wifi.h"
#include "bes/http.h"
#include "bes/net.h"


#include "bes/tasks/heartbeat.h"


#include <stdio.h>

#define LED_PIN 4


void app_main(void)
{
    bes_boot_start();


    bes_wifi_init();

    bes_wifi_connect(
        "Proximus-Home-D518",
        ""
    );


    bes_http_start();

    bes_net_print_ip();

    // bes_display_on();
    // bes_gpio_write(21, 1);
    // bes_display_fill(BES_RED);
    bes_gpio_output(LED_PIN);

    bes_task_create(
        "heartbeat",
        heartbeat_task,
        2048,
        NULL,
        5
    );

    while(1)
    {
        bes_gpio_write(LED_PIN, 1);
        bes_delay(1000);

        bes_gpio_write(LED_PIN, 0);
        bes_delay(1000);
        // bes_display_on();
        // bes_delay(1000);
        // bes_display_off();
    }
}