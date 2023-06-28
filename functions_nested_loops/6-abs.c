#include "main.h"
#include <stdio.h>

/**
*_abs - valor absoluto
*@c:el numero de la computador
*Description: give the absolute value of an integer
*Return: 1 or 0
*/

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
