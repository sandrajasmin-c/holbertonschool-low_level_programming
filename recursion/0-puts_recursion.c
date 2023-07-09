#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Write a function that prints a string, followed by a new line.
 *
 * Return:  1.
 */

	void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar (*(s));
	_puts_recursion (s + 1);
	}
	else
	{
	putchar ('\n');
	}
}
