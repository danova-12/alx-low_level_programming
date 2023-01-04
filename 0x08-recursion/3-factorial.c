#include "main.h"
/**
 * factorial - compute factorial
 * @s: pointer
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));

}
