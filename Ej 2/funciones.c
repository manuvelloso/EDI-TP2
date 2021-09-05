#include "funicones.h"
#define B8 8
#define B16 16
#define B32 32

void ImprimirBin8(int8_t num)
{
	/*imprima el contenido en binario de una variable de 8 bits, 
	utilizando una máscara de bits y desplazamiento. */
	uint8_t var = 0;
	printf("\nNumero en binario (8 bits): ");
	for (uint8_t i = B8; i > 0; i--)
	{
		var = num & (0x01 << i-1);
		var = var >> (i-1);

		printf("%d ", var);
	}
}
void ImprimirBin16(int16_t num)
{
	/*imprima el contenido en binario de una variable de 8 bits,
	utilizando una máscara de bits y desplazamiento. */
	uint8_t var = 0;
	printf("\nNumero en binario (16 bits): ");
	for (uint8_t i = B16; i > 0; i--)
	{
		var = num & (0x0001 << i - 1);
		var = var >> (i - 1);

		printf("%d ", var);
	}
}

void ImprimirBin32(int32_t num)
{
	/*imprima el contenido en binario de una variable de 8 bits,
	utilizando una máscara de bits y desplazamiento. */
	uint8_t var = 0;
	printf("\nNumero en binario (32 bits): ");
	for (uint8_t i = B32; i > 0; i--)
	{
		var = num & (0x00000001 << i - 1);
		var = var >> (i - 1);

		printf("%d ", var);
	}
}