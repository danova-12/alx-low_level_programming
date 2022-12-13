#include "main.h"
/**
 * print_last_digit - prints last digit
 * @last: parameter accept value
 *
 * Return: last digit
 */
int print_last_digit(int last)
{
	int last_digit = last % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
