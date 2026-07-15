#include "bes/time.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void bes_delay(uint32_t milliseconds)
{
    vTaskDelay(pdMS_TO_TICKS(milliseconds));
}