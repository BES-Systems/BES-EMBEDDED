#include "bes/gpio.h"
#include "driver/gpio.h"

void bes_gpio_output(uint8_t pin)
{
    printf("[BES GPIO] Output pin %d\n", pin);

    gpio_reset_pin(pin);

    gpio_set_direction(
        pin,
        GPIO_MODE_OUTPUT
    );
}

void bes_gpio_write(uint8_t pin, uint8_t state)
{
    gpio_set_level(
        pin,
        state
    );
}