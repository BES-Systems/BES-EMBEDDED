#include "bes/kernel.h"
#include "bes/device.h"
#include "bes/version.h"

#include "bes/log.h"

// TODO: Make the actual scheduler, and
// it's initialization process.
static void bes_kernel_scheduler_init(void)
{
    bes_log("[ OK ] Scheduler ready");
}


static void bes_kernel_memory_init(void)
{
    bes_log("[ OK ] Memory manager ready");
}


static void bes_kernel_device_init(void)
{
    bes_device_init();
    bes_log("[ OK ] Device manager ready");
}


void bes_kernel_init(void)
{
    bes_log("[KERNEL] Starting");


    bes_kernel_memory_init();


    bes_kernel_scheduler_init();


    bes_kernel_device_init();


    bes_log("[KERNEL_V] %s\n", BES_VERSION_STRING);
    bes_log("[KERNEL] Kernel ready");
}
// not used | for now.
//const char *bes_kernel_version(void)
//{
//    return BES_KERNEL_VERSION;
//}
