#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, middle = 0;

	for (len = 0; str[len] != '\0'; len++)
		;
	middle = (len) / 2;

	while (str[middle] != '\0')
	{
		_putchar(str[middle]);
		middle++;
	}
	_putchar('\n');
}
