#include "main.h"
/**
 * _strdup - wedgywg
 * @str: pointer
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}
	dest = malloc(sizeof(char) * size(str));
	if (dest == 0)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * size - compute size
 * @p: pointer
 * Return: length
 */

int size(char *p)
{
	int j = 0;

	while (p[j] != '\0')
	{
		j++;
	}
	return (j + 1);
}
