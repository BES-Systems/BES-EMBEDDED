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

    // like the other versions, we set the handle
    // to `NULL`, but now with a TaskHandle_t.
    TaskHandle_t handle = NULL;

    xTaskCreate(
        function,
        name,
        stack_size,
        parameter,
        priority,
        &handle
    );

    // We now return this
    return (bes_task_t)handle;
    
}

void bes_task_end(bes_task_t task)
{
    vTaskDelete((TaskHandle_t)task);
}

void bes_task_delay(
    uint32_t milliseconds
)
{
    vTaskDelay(
        pdMS_TO_TICKS(milliseconds)
    );
}
