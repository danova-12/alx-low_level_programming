#include "main.h"
/**
 *  jack_bauer - prints every minute of the day
 *
 * Return: time of day
 */
void jack_bauer(void)
{
	int first;
	int second;

	for (first = 0; first <= 23; first++)
	{
		for (second = 0; second <= 59; second++)
		{
			_putchar(first / 10 + '0');
			_putchar(first % 10 + '0');
			_putchar(':');
			_putchar(second / 10 + '0');
			_putchar(second % 10 + '0');
			_putchar('\n');
		}
	}
}
