#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns an alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');

	return (0);
}
