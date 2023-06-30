 #include<stdio.h>

/**
 *_puts -imrpime la cadena de caracteres
 *el valor del puntero es 98
 *
 *@str: cadena de caracteres
 *Return:0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
