#include <stdio.h>

/**
*print_rev - imprime en reversa
*
*@s:immprime cadena en reversa
*Return: Always 0.
*/

void print_rev(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
	    i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}

