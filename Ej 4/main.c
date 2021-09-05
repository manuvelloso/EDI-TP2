
#include <stdint.h>
#include <stdio.h>

int main()
{
	/*a) Operador Complemento (~): Definir una variable “var1” con signo de 8 bits y guardar el
	número 53 en decimal. Definir otras dos variables con signo, y guardar en una el valor “-var1”
	(con signo cambiado) y en la otra la variable var1 negada (operador ~). Imprimir las 3 variables
	en decimal, hexadecimal y binario, y comparar resultados. ¿A qué se deben las diferencias?*/

	int8_t var1 = 53;
	int8_t var2 = -var1; //aca solo lo niego
	int8_t var3 = ~var1; //aca lo niego y le sumo 1

	printf("Var1         = %d: 0x%x\n", var1, var1);
	printf("Var2 (-var1) = %d: 0x%x\n", var2, var2);
	printf("Var3 (~var1) = %d: 0x%x\n", var3, var3);

	/*b) Operador AND (&): Definir una variable de 16 bits “mascara” y guardar el valor en
	hexadecimal 0xF0F0. Luego crear otra variable de 16 bits “var1” y asignar el número en
	hexadecimal 0x5A5A. Realizar la operación AND entre las dos variables. Imprimir todos los
	valores en hexadecimal y binario. Que diferencia hay con el operador &&? Y con el operador *?*/

	//Que diferencia hay con el operador &&? Y con el operador *? -> PREGUNTAR
	int16_t mascara = 0xF0F0;
	int16_t var = 0x5A5A;
	printf("var & mascara: 0x%x\n", var & mascara);
	printf("var * mascara: 0x%x\n", var * mascara);
	printf("var && mascara: 0x%x\n", var && mascara);

	/*c) Operador OR ( | ) : Definir una variable de 16 bits “var1” y guardar el valor 0xA0A0. Definir
	una segunda “var2” y guardar el valor 0x00FF. Realizar la operación OR entre las dos variables,
	e imprimir todos los valores en hexadecimal y binario. Que diferencia hay con el operador | |? Y
	con el operador +?*/

	int16_t var4 = 0xA0A0;
	int16_t var5 = 0x00FF;
	printf("var4 | var5: 0x%x\n", var4 | var5);
	printf("var4 || var5: 0x%x\n", var4 || var5);
	printf("var4 + var5: 0x%x\n", var4 + var5);

	/*d) Operador XOR ( ^ ) : Definir una variable de 16 bits y guardar el valor 0xFF00. Definir una
	segunda variable y guardar el valor 0x6060. Realizar la operación XOR entre las dos y mostrar
	todas los valores en hexadecimal y binario.*/

	int16_t var6 = 0xFF00;
	int16_t var7 = 0x6060;
	printf("var6 ^ var7: 0x%x\n", var6 ^ var7);

	/*e) Crear 4 variables signadas de 16 bits var1 = 0x5A5A, var2 = 0xA5A5, res_log y res_bool.
	Asignar a la variable res_log la operación and lógica (&) entre var1 y var2, y en la variable
	res_bool la operación and booleana (&&) entre var1 y var2. ¿Qué diferencias se observa en el
	resultado?*/

	int16_t var8 = 0x5A5A;
	int16_t var9 = 0xA5A5;
	int16_t res_log = var8 & var9;
	int16_t res_bool = var8 && var9;

	return 0;
}