#include <stdlib.h>
#include "main.h"

/**
 * create_array - creating array of chars
 * @size: size of the array
 * @c: array of chars
 * Return: newChar;
 */

char *create_array(unsigned int size, char c)
{

	char *newChar;
	unsigned int i;

	newChar = malloc(sizeof(char) * size);

	if (newChar == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		newChar[i] = c;
	}

	return (newChar);
}

