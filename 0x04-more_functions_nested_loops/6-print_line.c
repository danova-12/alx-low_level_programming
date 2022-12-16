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
	while (n)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}		


	_putchar('\n');
}
