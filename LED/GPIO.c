#pragma once
#include <lpc17xx.h>
#include "GPIO.h"

gpio_iniciializar_salida(int puerto, int pin)
{
	if (puerto == 0)
		LCP_GPIO0->DIR |= 0x01 << pin;
}