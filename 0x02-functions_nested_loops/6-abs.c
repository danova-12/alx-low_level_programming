#include "main.h"
/**
 * _abs - evaluate absolute value
 * @num : parameter accepts value
 *
 * Return: always positive value
 */
int _abs(int num)

{
	if (num > 0)
		return (num);
	else
		return (num *= -1);
}


