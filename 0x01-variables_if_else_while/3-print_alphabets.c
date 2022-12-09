#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int small = 'a';
	int capital = 'A';

	while (small <= 'a')
	{
		putchar(small);
		small++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
