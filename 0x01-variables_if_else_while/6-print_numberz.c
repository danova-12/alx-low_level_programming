#include <stdio.h>
#include <stdlib.h>

/**
 * main - return single integer from 0-10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sym = '0';

	while (sym <= '9')
	{
		putchar(sym);
		sym++;
	}
	putchar('\n');
	return (0);
}
