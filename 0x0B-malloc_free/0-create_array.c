#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prototype func
 * @size: uint
 * @c: char
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		arr = (char *)malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (i = 0; i <size; i++)
				arr[i] = c;
		}
	}

	return (arr);
}
