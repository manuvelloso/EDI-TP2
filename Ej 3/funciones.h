#pragma once
#include <stdio.h>
#include <stdint.h>

typedef struct
{
	int8_t signo;
	int8_t exp;
	int32_t mantisa;

} camposFloat_t;
/*Ejercicio 3: hacer una función ImprimirCamposFloat que permita imprimir los campos signo,
exponente y mantisa de una variable float. Además debe devolverlos en una estructura que
tenga estos tres campos. El prototipo debe ser el siguiente:
camposFloat_t ImprimirCamposFloat(float num);*/

camposFloat_t ImprimirCamposFloat(float num);