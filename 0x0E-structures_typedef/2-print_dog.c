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
	if (d)
	{

		if (d->name == NULL)

			printf("Name: (nil)\n");

		else

			printf("Name: %s\n", d->name);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");

		else
			printf("Owner: %s\n", d->owner);
		printf("Age: %f\n", d->age);
	}
}