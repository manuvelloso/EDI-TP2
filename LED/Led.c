
//capa de driver

#pragma once
#include "Led.h"
#include "GPIO.h"

void inicializar_led()
{
	gpio_iniciializar_salida(0, 22);
}

void encender_led()
{
	gpio_set(0, 22);
}

void apagar_led()
{

}