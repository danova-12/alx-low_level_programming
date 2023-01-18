#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls a function for each array item
 * @array: Name of the array passed
 * @size: size of array
 * @action: pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
