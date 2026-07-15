#ifndef BES_GPIO_H
#define BES_GPIO_H

#include <stdint.h>

void bes_gpio_output(uint8_t pin);
void bes_gpio_write(uint8_t pin, uint8_t state);

#endif