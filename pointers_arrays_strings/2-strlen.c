#include<stdio.h>

/**
* _strlen - imprime la longitud de la cadena.
*
* @s:retorna una longitud
* Return: retorna el tamaño de un streing
*/

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
