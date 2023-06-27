#include "main.h"

/**
* main - veririfcar caracter de minuscula.
*
* Return: Always 0. o 1
*/
 

int _islower(int c)

{
 int  i;

    
for ( i = 97; i  <= 122; i++) 
	{
	if (c == i)
	    return 0;
	}
	
		return (1);
}
