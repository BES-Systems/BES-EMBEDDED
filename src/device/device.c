#include "bes/device.h"

#include "bes/log.h"

#include <string.h>


static bes_device_t devices[BES_MAX_DEVICES];


static uint8_t device_count = 0;



void bes_device_init(void)
{
    memset(
        devices,
        0,
        sizeof(devices)
    );


    device_count = 0;


    bes_log("[ OK ] Device manager ready");
}




int bes_device_register(
    const char *name,
    void *driver
)
{

    if(device_count >= BES_MAX_DEVICES)
    {
        return -1;
    }


    devices[device_count].name = name;

    devices[device_count].driver = driver;

    devices[device_count].initialized = 1;


    device_count++;


    bes_log("[DEV] Registered device");


    return 0;
}




bes_device_t *bes_device_get(
    const char *name
)
{

    for(int i = 0; i < device_count; i++)
    {

        if(strcmp(
            devices[i].name,
            name
        ) == 0)
        {
            return &devices[i];
        }

    }


    return NULL;
}




void bes_device_list(void)
{

    bes_log("=== BES Devices ===");


    for(int i = 0; i < device_count; i++)
    {
        bes_log(devices[i].name);
    }

}