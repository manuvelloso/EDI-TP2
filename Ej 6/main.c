#include "funciones.h"

int main()
{
	uint32_t var = 0x0F00000A;
	printf("var: 0x0%x\n", var);

	printf("Forzar Apagado: ");
	if (ApagarBit(&var, 1) == 0)
		printf("Si\n");
	else
		printf("No\n");

	printf("var: 0x%x\n", var);
	
	printf("Forzar Prendido: ");
	if (EncenderBit(&var, 1) == 0)
		printf("Si\n");
	else
		printf("No\n");

	printf("var: 0x%x\n", var);

	printf("Consulta Bit: ");
	if(ConsultarBit(var, 1) == 0)
		printf("Prendido\n");
	else
		printf("Apagado\n");

	InvertirBit(&var, 0);
	printf("var: 0x%x\n", var);

	return 0;
}