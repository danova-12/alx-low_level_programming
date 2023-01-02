#include "main.h"
/**
 * _memcpy - copies memory data
 * @dest: dest address
 * @src: source
 * @n: size
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = dest[i];
	}
	return (dest);
}
