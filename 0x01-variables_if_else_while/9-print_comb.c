#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 separated by a coma followed by a space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int asd = '0';

	while (asd <= '9')
	{
		putchar(asd);
		if (asd != '9')
		{
			putchar(',');
			putchar(' ');
		}
		asd++;
	}
	putchar('\n');
	return (0);
}
