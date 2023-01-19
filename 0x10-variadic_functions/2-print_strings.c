#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer param
 * @n: param
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *string;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);

		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
