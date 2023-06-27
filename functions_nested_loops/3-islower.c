#include "main.h"

/**
* main - veririfcar caracter de minuscula.
*
* Return: Always 0. o 1
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
