
#include "funciones.h"
#include <math.h>

camposFloat_t ImprimirCamposFloat(float num)
{
	/*imprimir los campos signo, exponente y mantisa de una variable float. 
	Además debe devolverlos en una estructura que tenga estos tres campos.*/

	camposFloat_t var;
	int32_t entera = (int)num;
	int8_t e = log10(entera) / log10(2);
	int8_t E = e + 127; //el sesgo 
	int32_t mantisa = num / (pow(2, E));

	for (int i = 23; i > 0; i--)
	{
		
	}

	if (num < 0)
		var.signo = 1;
	else
		var.signo = 0;

	return var;
}