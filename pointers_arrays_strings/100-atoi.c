#include "main.h"

/**
 * _atoi - that convert a string to an integer.
 *
 * @s: string to be convert
 * Return: an intenger
 */

int _atoi(char *s)
{
	int i = 0, sig = 1;
	long int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sig *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
		i++;
	}
	num *= sig;
	return (num);
}
