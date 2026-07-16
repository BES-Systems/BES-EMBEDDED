#ifndef BES_BOARD_CYD_H
#define BES_BOARD_CYD_H

/*
 * BES-Embedded
 * Board Support Package
 * ESP32-2432S028 (CYD)
 */

/* Board information */

#define BES_BOARD_NAME "ESP32-2432S028"

/* Display */

#define BES_DISPLAY_WIDTH   240
#define BES_DISPLAY_HEIGHT  320

#define BES_DISPLAY_DRIVER_ILI9341

#define BES_PIN_LCD_MOSI    13
#define BES_PIN_LCD_MISO    12
#define BES_PIN_LCD_SCLK    14
#define BES_PIN_LCD_CS      15
#define BES_PIN_LCD_DC       2
#define BES_PIN_LCD_RST      4
#define BES_PIN_LCD_BCKL    21


/* GPIO */

#define BES_PIN_LED          4


/* Touch controller */

#define BES_HAS_TOUCH        1

#define BES_PIN_TOUCH_SDA   33
#define BES_PIN_TOUCH_SCL   32
#define BES_PIN_TOUCH_INT   36


/* Memory */

#define BES_HAS_PSRAM        1


/* Wireless */

#define BES_HAS_WIFI         1
#define BES_HAS_BLUETOOTH    1


#endif