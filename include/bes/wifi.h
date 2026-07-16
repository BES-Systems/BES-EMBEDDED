#ifndef BES_WIFI_H
#define BES_WIFI_H

#include <stdint.h>

void bes_wifi_init(void);
void bes_wifi_connect(const char *ssid, const char *password);
void bes_wifi_disconnect(void);

#endif