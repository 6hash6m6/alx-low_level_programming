#include "main.h"
#include <stdlib.h>

/**
 * _realloc - ep
 * @ptr: vptr
 * @old_size: uint
 * @new_size: uint
 * Return: m;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *c_ptr, *fill;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	c_ptr = ptr;
	m = malloc(sizeof(*c_ptr) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = m;

	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *c_ptr++;

	free(ptr);
	return (m);
}
