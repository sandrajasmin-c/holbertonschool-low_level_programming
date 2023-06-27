#include "main.h"

/**
*_isalpha - Checks for alphabetic character
*@c: The character to be checked
*
*Return:imprimir 1 para minuscula y o otros
*/

	int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
