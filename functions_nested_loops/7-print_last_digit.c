#include "main.h"

/**
*print_last_digit -  uu
*@num:
*@n:
* Return: el valor del ultimo digito
*/

{
	int print_last_digit(int n)
	int num;

	num = n % 10;

	if (num < 0)
	{

		num = num * -1;
	}
	_putchar (num + '0');

	return (num);
}
