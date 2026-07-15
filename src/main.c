#include "bes/board.h"
#include "bes/gpio.h"
#include "bes/time.h"
#include "bes/log.h"
#include "bes/display.h"
#include "bes/splash.h"
#include "bes/boot.h"
#include "bes/task.h"
#include "bes/tasks/heartbeat.h"


#include <stdio.h>

void app_main(void)
{
    bes_boot_start();

    bes_task_create(
        "heartbeat",
        heartbeat_task,
        2048,
        NULL,
        5
    );

    while(1)
    {
        bes_task_delay(1000);

        // bes_display_on();
        // bes_delay(1000);
        // bes_display_off();
    }
}