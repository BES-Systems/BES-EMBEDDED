#include "bes/log.h"
#include <stdio.h>

void bes_log(const char *message)
{
    printf("[BES] %s\n", message);
}