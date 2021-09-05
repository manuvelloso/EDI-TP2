#pragma once
#include <stdint.h>

/*
* Estado_Disparo_AD devuelve entero entre 0 y 7 segun el contenido de start
*/
uint8_t Estado_Disparo_AD(uint32_t AD0CR);
/*
Escribir una función que permita definir si el A/D esta encendido o apagado.
Devuelve 1 si el A/D está encendido y 0 si está apagado. Prototipo:
uint8_t Estado_AD (void):
Para realizar pruebas defina:

*/
uint8_t Estado_AD(uint32_t AD);
/*Escribir una función que me permita apagar el A/D (forzar un cero en el bit del
registro del punto anterior). Prototipo: */
void Apagar_AD(uint32_t *AD);
/*Escribir una función que me permita encender el A/D (forzar un uno en el bit del
registro del punto anterior). Prototipo: */
void Encender_AD(uint32_t* AD);
void Print_Estado(uint8_t Estado);
/*Escribir una función que permita setear el AD para que no inicie nunca la
conversión (START = 000).
*/
void Not_Start(uint32_t *AD);
/*Escribir una función que reciba un número entre 0 y 7, correspondiente a una de las
entradas del A/D, y me permita seleccionar esa entrada como la única activa. Prototipo:
void Activar_Entrada_AD(uint8_t entrada_seleccionada);
*/
void Activar_Entrada_AD(uint32_t* AD, uint8_t entrada_seleccionada);

/*Escribir una función que reciba un número entre 0 y 7, correspondiente a una de las
entradas del A/D, y me permita agregar esa entrada como activa. Prototipo:
*/
void Agregar_Entrada_AD(uint32_t* AD, uint8_t entrada_seleccionada);