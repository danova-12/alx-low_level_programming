#include "main.h"
/**
 * _strdup - wedgywg
 * size - compute length
 * @str: pointer
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dest = malloc(sizeof(char) * size(str));

	if (str == NULL || dest == NULL)
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
int size(char *p)
{
	int j = 0;

	while (p[j] != '\0')
	{
		j++;
	}
	return (j);
}
