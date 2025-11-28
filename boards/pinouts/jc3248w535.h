#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x303a
#define USB_PID 0x1001

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t TXD2 = 1;
static const uint8_t RXD2 = 2;

static const uint8_t SDA = 4;
static const uint8_t SCL = 8;

// Modified elsewhere
static const uint8_t SS = -1;
static const uint8_t MOSI = -1;
static const uint8_t MISO = -1;
static const uint8_t SCK = -1;

static const uint8_t G0 = 0;
static const uint8_t G1 = 1;
static const uint8_t G2 = 2;
static const uint8_t G3 = 3;
static const uint8_t G4 = 4;
static const uint8_t G5 = 5;
static const uint8_t G6 = 6;
static const uint8_t G7 = 7;
static const uint8_t G8 = 8;
static const uint8_t G9 = 9;
static const uint8_t G10 = 10;
static const uint8_t G11 = 11;
static const uint8_t G12 = 12;
static const uint8_t G13 = 13;
static const uint8_t G14 = 14;
static const uint8_t G15 = 15;
static const uint8_t G21 = 21;
static const uint8_t G39 = 39;
static const uint8_t G40 = 40;
static const uint8_t G41 = 41;
static const uint8_t G42 = 42;
static const uint8_t G43 = 43;
static const uint8_t G44 = 44;
static const uint8_t G45 = 45;
static const uint8_t G46 = 46;
static const uint8_t G47 = 47;
static const uint8_t G48 = 48;

static const uint8_t ADC1 = 7;
static const uint8_t ADC2 = 8;

#define FP	1
#define FM	2
#define FG	3

#define HAS_SCREEN	1
#define ROTATION	0
#define MINBRIGHT	10

// AXS15231B Display Configuration (320x480, QSPI)
#define HAS_TOUCH	1
#define DISPLAY_AXS15231B_QSPI	1
#define DISPLAY_WIDTH	320
#define DISPLAY_HEIGHT	480

// QSPI Bus Configuration
#define AXS15231B_SPI_HOST	SPI2_HOST
#define AXS15231B_SPI_DMA_CHANNEL	SPI_DMA_CH_AUTO
#define AXS15231B_SPI_BUS_PCLK	47
#define AXS15231B_SPI_BUS_DATA0	21
#define AXS15231B_SPI_BUS_DATA1	48
#define AXS15231B_SPI_BUS_DATA2	40
#define AXS15231B_SPI_BUS_DATA3	39
#define AXS15231B_SPI_BUS_MAX_TRANSFER_SZ	(DISPLAY_WIDTH*DISPLAY_HEIGHT*sizeof(uint16_t))
#define AXS15231B_SPI_BUS_FLAGS	0
#define AXS15231B_SPI_BUS_INTR_FLAGS	0

// SPI Configuration
#define AXS15231B_SPI_CONFIG_CS	45
#define AXS15231B_SPI_CONFIG_DC	8
#define AXS15231B_SPI_CONFIG_SPI_MODE	SPI_MODE3
#define AXS15231B_SPI_CONFIG_PCLK_HZ	40000000
#define AXS15231B_SPI_CONFIG_TRANS_QUEUE_DEPTH	10
#define AXS15231B_SPI_CONFIG_LCD_CMD_BITS	32
#define AXS15231B_SPI_CONFIG_LCD_PARAM_BITS	8

// Configuration Flags
#define AXS15231B_SPI_CONFIG_FLAGS_DC_AS_CMD_PHASE	0
#define AXS15231B_SPI_CONFIG_FLAGS_DC_LOW_ON_DATA	0
#define AXS15231B_SPI_CONFIG_FLAGS_OCTAL_MODE	0
#define AXS15231B_SPI_CONFIG_FLAGS_QUAD_MODE	1
#define AXS15231B_SPI_CONFIG_FLAGS_SIO_MODE	0
#define AXS15231B_SPI_CONFIG_FLAGS_LSB_FIRST	0

// Device Configuration
#define AXS15231B_DEV_CONFIG_RESET	GPIO_NUM_NC
#define AXS15231B_DEV_CONFIG_COLOR_SPACE	ESP_LCD_COLOR_SPACE_BGR
#define AXS15231B_DEV_CONFIG_BITS_PER_PIXEL	16
#define AXS15231B_DEV_CONFIG_FLAGS_RESET_ACTIVE_HIGH	false
#define AXS15231B_DEV_CONFIG_VENDOR_CONFIG	NULL

// Touch and Other Pins
#define AXS15231B_TE	38
#define AXS15231B_TOUCH_I2C_SDA	4
#define AXS15231B_TOUCH_I2C_SCL	8
#define AXS15231B_TOUCH_I2C_RST	-1
#define AXS15231B_TOUCH_I2C_IRQ	3
#define GPIO_BCKL	1

// Display Transformations
#define DISPLAY_SWAP_XY	0
#define DISPLAY_MIRROR_X	0
#define DISPLAY_MIRROR_Y	0

// Backlight
#define TFT_BL	1

// SD Card (not used on this board)
#define SDCARD_CS	-1
#define SDCARD_SCK	-1
#define SDCARD_MISO	-1
#define SDCARD_MOSI	-1

#define GROVE_SDA	4
#define GROVE_SCL	8

#define SPI_SCK_PIN	    12
#define SPI_MOSI_PIN	11
#define SPI_MISO_PIN	13
#define SPI_SS_PIN	    10

#endif /* Pins_Arduino_h */
