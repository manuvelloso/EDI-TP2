#pragma once
#include <stdint.h>
/** @defgroup PERIPH_175X_6X_BASE CHIP: LPC175x/6x Peripheral addresses and register set declarations
 * @ingroup CHIP_17XX_40XX_Drivers
 * @{


#define LPC_GPIO0_BASE            0x2009C000
#define LPC_GPIO1_BASE            0x2009C020
#define LPC_GPIO2_BASE            0x2009C040
#define LPC_GPIO3_BASE            0x2009C060
#define LPC_GPIO4_BASE            0x2009C080
*/
/**
 * @brief GPIO port  (GPIO_PORT) for LPC175x_6x, LPC177x_8x and LPC407x_8x
 */

typedef struct {				/* GPIO_PORT Structure */
	uint32_t DIR;			/*!< Offset 0x0000: GPIO Port Direction control register */
	uint32_t RESERVED0[3];
	uint32_t MASK;			/*!< Offset 0x0010: GPIO Mask register */
	uint32_t PIN;			/*!< Offset 0x0014: Pin value register using FIOMASK */
	uint32_t SET;			/*!< Offset 0x0018: Output Set register using FIOMASK */
	uint32_t CLR;			/*!< Offset 0x001C: Output Clear register using FIOMASK */
} LPC_GPIO_T;

/*
#define LPC_GPIO                  ((LPC_GPIO_T             *) LPC_GPIO0_BASE)
#define LPC_GPIO1                 ((LPC_GPIO_T             *) LPC_GPIO1_BASE)
#define LPC_GPIO2                 ((LPC_GPIO_T             *) LPC_GPIO2_BASE)
#define LPC_GPIO3                 ((LPC_GPIO_T             *) LPC_GPIO3_BASE)
#define LPC_GPIO4                 ((LPC_GPIO_T             *) LPC_GPIO4_BASE)
*/

LPC_GPIO_T LPC_GPIO[5];

#define LPC_GPIO0 (LPC_GPIO + 0)
#define LPC_GPIO1 (LPC_GPIO + 1)
#define LPC_GPIO2 (LPC_GPIO + 2)
#define LPC_GPIO3 (LPC_GPIO + 3)
#define LPC_GPIO4 (LPC_GPIO + 4)

gpio_iniciializar_salida(int puerto, int pin);
gpio_set(int puerto,int pin);
gpio_clear(int puerto, int pin);

