#include "main.h"

/**
 * print_alphabet_x10 - prints lower case 10 times
 *
 * return : nothing
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int boundary = 0;

	while (boundary < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		boundary++;
	}
	_putchar('\n');
}
