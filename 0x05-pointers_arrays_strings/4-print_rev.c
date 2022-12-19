#include "main.h"
/**
 *  print_rev - This function prints a string in reverse order
 *  @s: pointer
 *
 */
void print_rev(char *s)
{
	int l = 0;
	int m;

	while (s[l] != '\0')
	{
		l++;
	}

	for (m = l - 1; m >= 0; m--)
	{
		_putchar(s[m]);

	}
	_putchar('\n');
}
