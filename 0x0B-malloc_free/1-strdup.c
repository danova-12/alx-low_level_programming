#include "main.h"
/**
 * _strdup - wedgywg
 * @str: pointer
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dest = malloc(sizeof(*str));

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
