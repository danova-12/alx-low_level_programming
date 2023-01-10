#include "main.h"
/**
 * create_array - create an array of character
 * @size: size of memory
 * @c: character
 *
 * Return: pointer of chracter
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = malloc(size);

	if (size == 0 || p == NULL)
		return (NULL);
	else
	{
		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	return (p);
}
