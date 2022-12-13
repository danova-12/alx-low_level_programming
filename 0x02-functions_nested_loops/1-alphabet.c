#include "main.h"
/**
 * print_alphabet - function print alphabet
 *
 * return : none
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

