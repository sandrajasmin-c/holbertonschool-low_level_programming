#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - imprimir numeros en base 16
 *
 *Return: Always 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
	putchar(c);
	c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
