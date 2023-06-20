#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL || d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
	printf("Name: (nil)\n");
	printf("Name: (nil)\n");
	}
	
	printf("Age: %f\n", d->age);
}
