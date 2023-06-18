#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocating space
 * @b: pointer to address allocated
 * Return: b;
 */

void *malloc_checked(unsigned int b)
{

	void *t = malloc(sizeof(b));

	if (t == NULL)
		exit(98);

	return (t);
}
