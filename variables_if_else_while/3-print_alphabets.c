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
  int c = 'a';
  while(c <= 'z')
       {
	 putchar(c);
	 c++;
       }
  c = 'A';
  while (c <= 'Z')
    {
      putchar(c);
      c++;
    }
  putchar('\n');
  return (0);
}
