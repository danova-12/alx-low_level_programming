#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets in lower
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_ch = 'a';

	while (single_ch <= 'z')
	{
		putchar(single_ch);
		single_ch++;
	}
	putchar('\n');
	return (0);
}
