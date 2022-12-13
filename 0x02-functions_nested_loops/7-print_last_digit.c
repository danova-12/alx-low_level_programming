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

	_putchar(last_digit);
	return (last_digit);
}
