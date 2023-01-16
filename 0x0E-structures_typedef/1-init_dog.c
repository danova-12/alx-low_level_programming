#include "dog.h"
/**
 * init_dog - intialize dog
 * @d: pointer to object
 * @name: name
 * @age: age variable
 * @owner: parameter
 * Return: nothing
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
