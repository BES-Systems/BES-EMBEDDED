#ifndef BES_DEVICE_H
#define BES_DEVICE_H


#include <stdint.h>


#define BES_MAX_DEVICES 16


typedef struct
{
    const char *name;

    void *driver;

    uint8_t initialized;

} bes_device_t;



void bes_device_init(void);



int bes_device_register(
    const char *name,
    void *driver
);



bes_device_t *bes_device_get(
    const char *name
);



void bes_device_list(void);


#endif