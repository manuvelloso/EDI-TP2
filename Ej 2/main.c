/*Ejercicio 2: Realizar una función llamada ImprimirBin8 que imprima el contenido en binario
de una variable de 8 bits, utilizando una máscara de bits y desplazamiento. Repetir esta función
para 16 y 32 bits. El prototipo de la función es el siguiente.
void ImprimirBin8 (int8_t num);*/

#include "funicones.h"

int main()
{
	int8_t num = 154;
	ImprimirBin8(10);
	ImprimirBin16(10);
	ImprimirBin32(10);

	return 0;
}