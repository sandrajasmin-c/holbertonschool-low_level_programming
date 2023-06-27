#include "main.h"

/**
* _islower- imprimir si es 1 o 0 para cada instruccion.
*@c: the cracther revisado
*
*Return: 1 albabeto
*/



int _islower(int c)
{
	int  i = 0;

	for (i = 'a'; i  <= 'z'; i++)
	{
	if (i == c)
	{
	return (1);
	}
	}
		return (0);
}
