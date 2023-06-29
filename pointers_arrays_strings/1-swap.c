#include<stdio.h>

/**
*swap_int -intercambiando valores entre dos variables
*el valor del puntero es 98
*
*@a: contiene un valor entero
*@b: contiene un valor entero
*Return: 0
*/

void swap_int(int *a, int *b)
/*la funcion de swap imprime el valor de dos enteros*/
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

