#include "main.h"

/**
 * print_diagonal - print slash
 * @n: params
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
		 	}
			_putchar(92);
		}
	}
	else
	{
		_putchar('\n');
	}
}
