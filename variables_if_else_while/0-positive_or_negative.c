#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main ejecutar funcion si es poaitivo negativo o zero. */
/**
(* 
* Return: 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n>0)
	  printf("%d is positive\n",n);
	if (n < 0)
	  printf("%d is negative\n",n);
	else
	  printf("%d is zero\n",n);
     
	Return (0);
 }
