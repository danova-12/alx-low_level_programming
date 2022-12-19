#include "main.h"

/**
 * rev_string - This function prints a string reversly
 * @s: pointer parameter
 */
void rev_string(char *s)
{
	int length, i, middle;
	char current;

	for (length = 0; s[length] != '\0'; length++)
	;
	i = 0;
	middle = length / 2;

	while (middle--)
	{

		current = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
