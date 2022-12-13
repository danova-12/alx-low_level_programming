#include "main.h"

/**
 *  _islower - check number and returns 1 if it is lowercase
 *  @c : variable accepts number
 *
 * Return: 1 if it is lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
