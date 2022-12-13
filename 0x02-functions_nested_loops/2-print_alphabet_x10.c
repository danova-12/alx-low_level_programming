#include "main.h"

/**
 * print_alphabet_x10 - prints lower case 10 times
 *
 * return : nothing
 */
void print_alphabet_x10(void)
{
	
	int boundary = 0;

	while (boundary < 10)
	{	char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		boundary++;
		_putchar('\n');
	}

}
