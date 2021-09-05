#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define M 8
/*
a) Seleccionar la entrada 0 y 1 como entradas del ADC a convertir.
b) Leer el valor del clock como un valor entero.
c) Invertir el valor del flanco
d) Forzar el ADC para bajo consumo
*/

//typedef struct
//{
//	uint32_t SEL[8];
//	uint32_t CLKDIV[8];
//	uint32_t BURST;
//	uint32_t RESERVED0[4];
//};

int32_t Convert(int32_t ADC, int bit);
int32_t ReadClock(int32_t ADC, int bit);
int32_t Invert(int32_t ADC, int bit);
int32_t BajoConsumo(int32_t ADC, int bit);

int main()
{
	int32_t ADC; //es una variable de 32 bits
	//entre bit 8 y bit 15 esta lo del clock

	return 0;
}

int32_t Convert(int32_t ADC, int bit)
{
	int exit = ADC | ((0x00000001) << bit); //fuerzo un 1
	return exit;
}
/*
010 << 1
100
*/

int32_t ReadClock(int32_t ADC, int bit)
{
	//agarro y me lo copio en euna variable auxiliar -> para no modificar el registro
	int32_t aux = ADC;

	aux = aux & (0x0000FF00); //El FF esta en los lugares de 8 a 15
	aux = aux >> bit; // lo desplazo para la derecha para que me quede 0000000XXX y lo pueda leer como entero dsp
					//el 0000FF00 es "la mascara"
	// Si hago todo en un paso: aux = (0x000000FF) & (aux >> bit);
	return aux;
}

int32_t Invert(int32_t ADC, int bit)
{
	int32_t exit = ADC & (~bit); //fuerzo un 0
	//ADC ^((0x00000001) << 27); -> uso XOR
	return exit;
}

int32_t BajoConsumo(int32_t ADC, int bit)
{
	int32_t exit;
	exit = ADC & (~((0x00000001) << bit)); //fuerzo el 0
	
	return exit;
}