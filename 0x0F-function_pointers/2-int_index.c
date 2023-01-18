#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search integer
 * @array: array passed
 * @size: size of the array
 * @cmp: pointer to function 
 *
 * Return: return index and -1 if size less than 0 and match fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
