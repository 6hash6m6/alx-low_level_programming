#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array that has integers
 * @size: size of array
 * @cmp: pointer to the function that has the code
 * Return: 1st index
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
