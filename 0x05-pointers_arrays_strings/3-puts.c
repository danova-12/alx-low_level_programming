#include "main.h"
/**
 * _puts - print
 * @str: para
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
