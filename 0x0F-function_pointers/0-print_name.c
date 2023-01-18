#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints name
 * @name: char to display
 * @f: A pointer function
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
