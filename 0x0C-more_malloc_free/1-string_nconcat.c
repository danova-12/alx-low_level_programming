#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	n = len2;
	p = malloc((len1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		p[i] = s2[i - len1];
	}
	p[i] = '\0';

	return (p);
}
