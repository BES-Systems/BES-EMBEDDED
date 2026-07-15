#include "bes/tasks/heartbeat.h"
#include "bes/log.h"

void heartbeat_task(void *arg)
{
    while(1)
    {
        bes_log("BES heartbeat");

        bes_task_delay(1000);
    }
}