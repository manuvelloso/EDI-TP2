#pragma once

//capa de aplicación
#include "Led.h"
#include <stdio.h>

int main()
{
	inicializar_led();

	while (1)
	{
		encender_led(); //prendo luz
		sleep(500); //espero
		apagar_led(); //apago luz
		sleep(500); //espero
	}

	return 0;
}