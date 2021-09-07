
#include "AD0CR.h"
#define START 24
#define PDN 21
#define SEL 7

uint8_t Estado_Disparo_AD(uint32_t AD0CR)
{
	//START ESTA ENTRE 26:24 -> TENGO QUE DESPLAZAR 24 VECES
	int exit = AD0CR;
	exit = exit >> START;
	exit &= (0x00000007);
	return exit;

	/*
		Para tomar los bits que me interesan:
		- operadores: ~ & | ^
		- Mask: 0x01
		Para que el resultado que me quede sea solo los bits que me interesan
		Lo desplazo N veces hacia la >> para poder leer el valor
	
		Si desplazo primero -> la mascara cambia (MEJOR ESTO)
		(1° DESPLAZAR Y DSP MASKEAR => APLICAR OPERACION &)
	
		Con estas operaciones y operadores a niveles de bits me ahorrar el uso de arrays
	*/
}

uint8_t Estado_AD(uint32_t AD)
{
	uint32_t result = AD >> PDN; //el bit de prendido/apagado esta a la ->
	result = result & 0x000001; //me quedo con el primer bit (0x000000X)

	if (result == 1)
		return 1;
	else
		return 0;
}

void Print_Estado(uint8_t Estado)
{
	printf("Estado: ");
	if (Estado == 1)
		printf("ENCENDIDO\n");
	else
		printf("APAGADO\n");
}

void Apagar_AD(uint32_t *AD)
{
	//Tengo que forzar un 0
	uint8_t estado = Estado_AD(*AD);
	if (estado == 1) //si esta prendido fuerzo un 0
		*AD = *AD ^ (0x00000001 << PDN);
}

void Encender_AD(uint32_t* AD)
{
	//Tengo que forzar un 1
	uint8_t estado = Estado_AD(*AD);
	if (estado == 0) //si esta prendido fuerzo un 0
		*AD = *AD | (0x00000001 << PDN);
}

void Not_Start(uint32_t* AD) //PREGUNTAR
{
	//XXXX X000 XXXX XXXX XXXX XXXX XXXX XXXX
	uint8_t result = Estado_Disparo_AD(*AD);
	if (result != 0) //si esta prendido fuerzo un 0
	{
		/*uint32_t pre = *AD >> START + 1;
		uint32_t start = *AD >> START;
		uint32_t aux = *AD & (0x00FFFFF);
		start = start& (0x00000000);

		*AD = (pre << 31) | (start << 24) | aux;*/
		*AD = *AD & 0xF8FFFFFF;
	}
}

void Activar_Entrada_AD(uint32_t *AD, uint8_t entrada_seleccionada)
{
	/*En el mismo registro se definen los pines de selección de entradas del conversor. 
	Cada bit corresponde a una entrada:*/

	//XXXX XXXX XXXX XXXX XXXX XXXX 0000 0000
	uint32_t aux = *AD >> SEL;
	uint32_t entrada = 0x000000001 << entrada_seleccionada;
	*AD = aux << SEL | entrada;
}

void Agregar_Entrada_AD(uint32_t* AD, uint8_t entrada_seleccionada)
{
	uint32_t entrada = 0x000000001 << entrada_seleccionada;
	*AD = *AD | entrada;
}
