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
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
			_putchar('_');
	}
	else
	{	
		_putchar('\n');
	}	
	_putchar('\n');	
}
