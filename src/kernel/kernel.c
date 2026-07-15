#include "bes/kernel.h"
#include <stdio.h>

void bes_kernel_init(void)
{
    printf("[BES] Kernel initializing...\n");
    printf("[BES] Hardware abstraction loaded\n");
    printf("[BES] Scheduler ready\n");
}