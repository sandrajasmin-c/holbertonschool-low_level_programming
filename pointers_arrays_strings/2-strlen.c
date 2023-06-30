#include<stdio.h>

/**
*_strlenr - imprime la longitud de la cadena.
*
*@s:retorna una longitud
*@:_starlen retorna la longitud 
*Return: retorna la variable index
*la funcion _starlen imprime la longitud de una cadena
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}

