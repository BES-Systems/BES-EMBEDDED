#ifndef BES_NET_H
#define BES_NET_H

#include <stdint.h>

typedef struct
{
    uint8_t ip[4];
    uint8_t gateway[4];
    uint8_t netmask[4];

} bes_ip_info_t;


int bes_net_get_ip(bes_ip_info_t *info);

void bes_net_print_ip(void);


#endif