#include "main.h"

/**
 * _strcpy - that copies the string pointed to by src
 *
 * @dest: copy of the string
 * @src: pointer to string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
