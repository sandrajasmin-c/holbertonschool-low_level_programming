#include <stdio.h>

/**
* main - que imprima putchar 
* 
*Return: Always 0
**/ 
int main (void)
{

	char (*str) = "_putchar\n";
	while (*str)	
{	
    	_putchar(*str++);
}
    return 0;
}
