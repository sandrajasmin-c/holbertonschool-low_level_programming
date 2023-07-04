#include "main.h"

/**
 * rev_string - that reverses a string.
 *
 * @s: string to be reverse
 */
void rev_string(char *s)
{
	int size_str, index = 0, middle;
	char temp;

	for (size_str = 0; s[size_str] != '\0'; size_str++)
		;
	middle = size_str / 2;
	while (middle--)
	{
		temp = s[size_str - index - 1];
		s[size_str - index - 1] = s[index];
		s[index] = temp;
		index++;
	}
}
