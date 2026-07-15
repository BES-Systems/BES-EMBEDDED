#include <stdio.h>
#include "bes/kernel.h"

void app_main(void)
{
    bes_kernel_init();

    printf("\n");
    printf("=========================\n");
    printf("      BES-Embedded       \n");
    printf("=========================\n");
    printf("Hello World from BES OS!\n");
    printf("=========================\n");
}