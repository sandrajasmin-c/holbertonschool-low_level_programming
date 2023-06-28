#include "main.h"

/**
*main - print_sign Prints the sign of a number.
*@n: imprime a caracter un numero
*
* Return: 1 and n = 0 y 0 si n = 0 and -1 si n es negativo
*/

	 int print_sign(int n)
{

	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}


}
