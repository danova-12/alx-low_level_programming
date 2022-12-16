#include "main.h"

/**
 * print_line - print straight line
 * @n: number times
 *
 * Return: return nothing
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}


	_putchar('\n');
}
