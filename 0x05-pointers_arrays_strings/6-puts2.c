#include "main.h"
/**
 * puts2 - function that prints a string
 * @str: pointer
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
