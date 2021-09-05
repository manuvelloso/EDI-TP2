
#include "funciones.h"

camposFloat_t ImprimirCamposFloat(float num)
{
	/*imprimir los campos signo, exponente y mantisa de una variable float. 
	Además debe devolverlos en una estructura que tenga estos tres campos.*/
	camposFloat_t var;
	int32_t entera = (int)num;
	if (num < 0)
		var.signo = 1;
	else
		var.signo = 0;

	return var;
}