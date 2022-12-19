#include "main.h"
/**
 *_strlen - computes length
 *@s: accept character
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int sum = 0;

	while (s[sum] != '\0')
	{


		sum++;
	}
	return (sum);
}
