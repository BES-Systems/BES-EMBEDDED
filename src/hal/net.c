#include "bes/net.h"
#include "bes/log.h"

#include "esp_netif.h"


int bes_net_get_ip(bes_ip_info_t *info)
{
    if(info == NULL)
        return -1;


    esp_netif_t *netif =
        esp_netif_get_handle_from_ifkey(
            "WIFI_STA_DEF"
        );


    if(netif == NULL)
        return -1;


    esp_netif_ip_info_t ip_info;


    if(
        esp_netif_get_ip_info(
            netif,
            &ip_info
        ) != ESP_OK
    )
    {
        return -1;
    }


    info->ip[0] =
        (ip_info.ip.addr >> 0) & 0xFF;

    info->ip[1] =
        (ip_info.ip.addr >> 8) & 0xFF;

    info->ip[2] =
        (ip_info.ip.addr >> 16) & 0xFF;

    info->ip[3] =
        (ip_info.ip.addr >> 24) & 0xFF;


    return 0;
}



void bes_net_print_ip(void)
{
    bes_ip_info_t info;


    if(
        bes_net_get_ip(&info) != 0
    )
    {
        bes_log("No IP address");
        return;
    }


    char buffer[64];


    snprintf(
        buffer,
        sizeof(buffer),
        "IP: %d.%d.%d.%d",
        info.ip[0],
        info.ip[1],
        info.ip[2],
        info.ip[3]
    );


    bes_log(buffer);
}