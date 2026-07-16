#include "bes/log.h"

#include <stdio.h>
#include <stdarg.h>

void bes_log(const char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);

    printf("[BES] ");
    vprintf(fmt, args);

    va_end(args);
}