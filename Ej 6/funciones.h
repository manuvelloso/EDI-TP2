#pragma once
#include <stdint.h>
#include <stdio.h>

/*a) int32_t ApagarBit(uint32_t var, uint8_t nBit); Recibe una variable de 32
bits, y un número entre 0 y 32. Debe forzar a cero el bit recibido en “nBit” de la variable
“var”. Devolver cero en caso que se haya realizado con éxito y uno en caso contrario.
*/
int32_t ApagarBit(uint32_t *var, uint8_t nBit);

/*b) int32_t EncenderBit(uint32_t var, uint8_t nBit); // Recibe una variable de 32
bits, y un número entre 0 y 32. Debe forzar a uno el bit recibido en “nBit” de la variable
“var”. Devolver cero en caso que se haya realizado con éxito y uno en caso contrario.
*/
int32_t EncenderBit(uint32_t* var, uint8_t nBit);

/*uint8_t ConsultarBit(uint32_t var, uint8_t nBit); // Recibe una variable de
32 bits, y un número entre 0 y 32. Debe devolver el estado del bit numero “nBit” de la
variable “var” y uno en caso contrario*/
uint8_t ConsultarBit(uint32_t var, uint8_t nBit);

/*int32_t InvertirBit(uint32_t var, uint8_t nBit); // Recibe una variable de 32
bits, y un número entre 0 y 32. Debe cambiar el estado del bit recibido en “nBit” de la
variable “var”. Devolver cero en caso que se haya realizado con éxito y uno en caso
contrario*/
int32_t InvertirBit(uint32_t* var, uint8_t nBit);