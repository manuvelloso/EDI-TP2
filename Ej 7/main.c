
#include <stdio.h>
#include "AD0CR.h"

int main()
{
	uint32_t test = 0xF308A04F; //1111 0011 0000 1000 1010 0000 0100 1111
	uint8_t START = Estado_Disparo_AD(test);
	printf("STAR: %d\n", START);

	uint32_t AD0CR = 0x300001; //0011 0000 0000 0000 0000 0001 
	Print_Estado(Estado_AD(AD0CR));

	AD0CR = 0x100002; //0001 0000 0000 0000 0000 0010 -> apagado
	Print_Estado(Estado_AD(AD0CR));

	AD0CR = 0x300001;
	Apagar_AD(&AD0CR);
	Print_Estado(Estado_AD(AD0CR));

	Encender_AD(&AD0CR);
	Print_Estado(Estado_AD(AD0CR));

	printf("AD0CR: 0x%x\n", test);
	Not_Start(&test);
	START = Estado_Disparo_AD(test);
	printf("STAR: %d\n", START);
	Print_Estado(Estado_AD(AD0CR));
	printf("AD0CR: 0x%x\n", test);

	Activar_Entrada_AD(&test, 1);
	printf("AD0CR: 0x%x\n", test);
	Agregar_Entrada_AD(&test, 0);
	printf("AD0CR: 0x%x\n", test);

	return 0;
}