#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - ep
 * @min: int
 * @max: int
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr - malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
