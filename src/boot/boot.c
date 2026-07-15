#include "bes/boot.h"

#include "bes/log.h"
#include "bes/display.h"
#include "bes/splash.h"


static void bes_boot_hardware_check(void)
{
    bes_log("[ OK ] Hardware check");
}


static void bes_boot_init_services(void)
{
    bes_log("[ OK ] Services initialized");
}


void bes_boot_start(void)
{
    bes_log("==============================");
    bes_log("       BES-Embedded Boot      ");
    bes_log("==============================");


    bes_log("[BOOT] Starting system");


    /*
        Hardware initialization
    */

    bes_display_init();


    /*
        Show splash screen
    */

    bes_splash_show();



    /*
        Hardware tests
    */

    bes_boot_hardware_check();



    /*
        Start services
    */

    bes_boot_init_services();



    bes_log("[BOOT] System ready");
}