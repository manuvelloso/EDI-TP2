#include "funciones.h"

int32_t ApagarBit(uint32_t *var, uint8_t nBit)
{
	uint32_t aux = *var >> nBit;
	aux = aux & 0x00000001;
	if (aux == 1)
	{
		*var = *var & (~((0x00000001) << nBit)); //fuerzo el 0
		return 0;
	}
	else
		return 1;
}

int32_t EncenderBit(uint32_t* var, uint8_t nBit)
{
	uint32_t aux = *var >> nBit;
	aux = aux & 0x00000001;
	if (aux == 0)
	{
		*var = *var | ((0x00000001) << nBit); //fuerzo el 1
		return 0;
	}
	else
		return 1;
}

uint8_t ConsultarBit(uint32_t var, uint8_t nBit)
{
	uint32_t aux = var >> nBit;
	aux = aux & 0x00000001;
	if (aux == 1)
		return 0;
	else
		return 1;
}

int32_t InvertirBit(uint32_t* var, uint8_t nBit)
{
	if (ConsultarBit(*var, nBit) == 0) //si el bit esta en 1
		return ApagarBit(var, nBit);
	else //si el bit esta en 0
		return EncenderBit(var, nBit);
}