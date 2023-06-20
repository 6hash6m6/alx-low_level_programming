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

	printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));

}
