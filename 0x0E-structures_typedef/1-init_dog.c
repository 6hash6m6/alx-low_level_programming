#include <stdio.h>
#include "dog.h"

/**
 * init_dog - func deals with struct
 * @d: pointer structure to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}

