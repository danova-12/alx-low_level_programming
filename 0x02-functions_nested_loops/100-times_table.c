#include "main.h"

/**
 * print_times_table - prints multplication table
 * @n : value passed
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= n; i++)
	{
		for ( j = 0; j <= n; j++)
		{
			if (n > 0 && n < = 15)
			{	
				_putchar(i * j);
				_putchar(',');
				_putchar('  ');	
			}
			_putchar('\n');
		}
	}
}	
