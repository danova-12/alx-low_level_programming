#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: pointer to string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
		_putchar('\n');
	else
		_putchar(*s);
		_puts_recursion(s++);
}
