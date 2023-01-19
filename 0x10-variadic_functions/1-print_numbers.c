#include "variadic_functions.h"

/**
 * print_numbers - prints num passed
 * @separator: pointer to string
 * @n: number of argument
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;


	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(ptr, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
