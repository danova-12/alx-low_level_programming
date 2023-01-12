
#include "main.h"
/**
 * setmemory - copy char
 * @ptr: string
 * @b: input
 * @n: memory block size
 * Return: pointer to memory allocated
 */
char *setmemory(char *ptr, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}

	return (ptr);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	setmemory(p, 0, (nmemb * size));

	return (p);
}
