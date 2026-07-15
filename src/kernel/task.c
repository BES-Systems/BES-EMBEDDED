#include "bes/task.h"


#include "freertos/FreeRTOS.h"
#include "freertos/task.h"



void bes_task_create(
    const char *name,
    bes_task_func_t function,
    uint32_t stack_size,
    void *parameter,
    uint32_t priority
)
{
    xTaskCreate(
        function,
        name,
        stack_size,
        parameter,
        priority,
        NULL
    );
}



void bes_task_delay(
    uint32_t milliseconds
)
{
    vTaskDelay(
        pdMS_TO_TICKS(milliseconds)
    );
}