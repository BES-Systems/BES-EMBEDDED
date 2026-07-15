#ifndef BES_KERNEL_H
#define BES_KERNEL_H

void bes_kernel_init(void);

// Future expandable functions
void bes_kernel_start(void);
void bes_kernel_shutdown(void);
void bes_kernel_panic(const char *reason);

bool bes_kernel_ready(void);

const char *bes_kernel_version(void);

#endif
