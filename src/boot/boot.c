#include "bes/boot.h"
#include "bes/boot_state.h"

#include "bes/log.h"
#include "bes/display.h"
#include "bes/splash.h"
#include "bes/kernel.h"


static bes_boot_state_t boot_state;


static void boot_set_state(
    bes_boot_state_t state
)
{
    boot_state = state;
}




static void boot_hardware_init(void)
{
    bes_log("[BOOT] Hardware init");

    boot_set_state(
        BES_BOOT_HARDWARE_INIT
    );
}


static void boot_display_init(void)
{
    bes_log("[BOOT] Display init");

    bes_display_init();

    bes_splash_show();


    boot_set_state(
        BES_BOOT_DISPLAY_INIT
    );
}


static void boot_system_check(void)
{
    bes_log("[BOOT] Running system check");


    bes_log("[ OK ] Memory");
    bes_log("[ OK ] GPIO");
    bes_log("[ OK ] SPI");


    boot_set_state(
        BES_BOOT_SYSTEM_CHECK
    );
}


static void boot_services_start(void)
{
    bes_log("[BOOT] Starting services");


    boot_set_state(
        BES_BOOT_SERVICES_START
    );
}

static void boot_kernel_start(void)
{
    bes_log("[BOOT] Starting kernel");

    bes_kernel_init();
}

void bes_boot_start(void)
{
    bes_log("==============================");
    bes_log("       BES-Embedded Boot");
    bes_log("==============================");


    boot_set_state(
        BES_BOOT_POWER_ON
    );


    bes_log("[BOOT] Power on");


    boot_hardware_init();


    boot_display_init();


    boot_system_check();


    boot_services_start();


    boot_kernel_start();


    boot_set_state(
        BES_BOOT_COMPLETE
    );


    bes_log("==============================");
    bes_log("     BES SYSTEM READY");
    bes_log("==============================");
}