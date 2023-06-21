#include "function_pointers.h"

/**
 * array_iterator - printing each array element
 * @array: array to print
 * @size: size of array
 * @action: pointer function that has the code to iterate through array's elems
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
