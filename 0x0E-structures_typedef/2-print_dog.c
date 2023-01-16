#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print data
 * @d: object pointer
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{	
	if(d)
	{

		if (d->name == NULL || d->owner == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
