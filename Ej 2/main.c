/*Ejercicio 2: Realizar una funci?n llamada ImprimirBin8 que imprima el contenido en binario
de una variable de 8 bits, utilizando una m?scara de bits y desplazamiento. Repetir esta funci?n
para 16 y 32 bits. El prototipo de la funci?n es el siguiente.
void ImprimirBin8 (int8_t num);*/

#include "funicones.h"

int main()
{
	int8_t num = 128;
	ImprimirBin8(num);
	ImprimirBin16(num);
	ImprimirBin32(num);

	return 0;
}