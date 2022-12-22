#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: First string
 * @s2: Second string
 * Return: Value less than 0 if string is less than the other
 * Value greater than 0 if string is greater then the other
 * 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int tempo, comparison;

	tempo = 0;

	while (s1[tempo] == s2[tempo] && s1[tempo] != '\0')
	{
		tempo++;
	}

	comparison = s1[tempo] - s2[tempo];
	return (comparison);
}
