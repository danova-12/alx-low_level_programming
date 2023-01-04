#include "main.h"
/**
 * _strlen_recursion - returns length
 * @s: pointer
 *
 * Return: length of str
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
