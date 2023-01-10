#include "main.h"
/**
 * _strdup - wedgywg
 * @str: pointer
 *
 * Return: pointer
 */
char *_strdup(char *str)
{	int j, len;

	while (str[j] != '\0')
	{
		j++;
	}

	len = j + 1;
	int i = 0;
	char *dest = malloc(sizeof(char) * len);

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
