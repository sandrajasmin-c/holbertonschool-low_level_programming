#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - imprimir funcion de un numero
 * 
 *Return: Always (success)
 */
int main(void)
{
      int n, last_digit;

       srand(time(0));
       n = rand() - RAND_MAX / 2;
       /* your code goes there */

       last_digit = n % 10;
       
       if (last_digit > 5)

       {
	 printf("last digit of %d is %d and is greater then 5\n", n, last_digit);
       }
       else if (last_digit == 0)
       {
	 printf("last digit of %d is %d and 0\n", n, last_digit);
        }
       else if (last_digit < 6 && last_digit !=0)
       {
	 printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
       }

		 return (0);

}
