#include "main.h"
/**
 * _isalpha - check input is alphabet
 * @c: parameter checked
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
