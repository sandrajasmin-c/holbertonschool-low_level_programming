#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**

 * main - imprimir alfabeto en minuscula 
 * 
 *Return: Always 0
 */
int main(void)
{
  int c = 97;
  while(c <= 122)
       {
	 putchar(c);
	 c++;
       }
  putchar('\n');
  return (0);
}
