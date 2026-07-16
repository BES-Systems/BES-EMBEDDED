#ifndef BES_TASK_H
#define BES_TASK_H

#include <stdint.h>


typedef void (*bes_task_func_t)(void *);

typedef void *bes_task_t;

bes_task_t bes_task_create(
    const char *name,
    bes_task_func_t function,
    uint32_t stack_size,
    void *parameter,
    uint32_t priority
);

void bes_task_end(bes_task_t task);

void bes_task_delay(uint32_t milliseconds);

#endif
