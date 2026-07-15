#include "bes/kernel.h"

#include "bes/log.h"


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
    bes_log("[ OK ] Device manager ready");
}


void bes_kernel_init(void)
{
    bes_log("[KERNEL] Starting");


    bes_kernel_memory_init();


    bes_kernel_scheduler_init();


    bes_kernel_device_init();


    bes_log("[KERNEL] Kernel ready");
}