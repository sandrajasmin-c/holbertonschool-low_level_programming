#include<stdio.h>

/**
*_strlenr - imprime la longitud de la cadena.
*
*@s:retorna una longitud
*Return: la direccion de la memoria o puntero
*la ción _starlen imprime la longitud de una cadena
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}

