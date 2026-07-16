#include "bes/wifi.h"
#include "bes/log.h"
#include "nvs_flash.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_netif.h"


void bes_wifi_init(void)
{
    esp_netif_init();

    esp_event_loop_create_default();

    esp_netif_create_default_wifi_sta();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();

    nvs_flash_init();
    esp_wifi_init(&cfg);

    esp_wifi_set_mode(WIFI_MODE_STA);

    esp_wifi_start();

    bes_log("WiFi initialized");
}


void bes_wifi_connect(const char *ssid, const char *password)
{
    wifi_config_t wifi_config = {0};


    snprintf(
        (char *)wifi_config.sta.ssid,
        sizeof(wifi_config.sta.ssid),
        "%s",
        ssid
    );


    snprintf(
        (char *)wifi_config.sta.password,
        sizeof(wifi_config.sta.password),
        "%s",
        password
    );


    esp_wifi_set_config(
        WIFI_IF_STA,
        &wifi_config
    );


    esp_wifi_connect();

    bes_log("Connecting WiFi...");
}


void bes_wifi_disconnect(void)
{
    esp_wifi_disconnect();

    bes_log("WiFi disconnected");
}