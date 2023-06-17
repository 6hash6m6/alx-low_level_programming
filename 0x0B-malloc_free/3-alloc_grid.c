#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returning pointer to dimensional array of ints
 * @width: width of the grid
 * @height: height of the grid
 * Return: grid;
 */

int **alloc_grid(int width, int height)
{
	int i, n;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			int f;
			for (f = 0; f < i; f++)
				free(grid[f]);
			free(grid);
			return (NULL);
		}

		for (n = 0; n < width; n++)
			grid[i][n] = 0;
	}

	return (grid);
}
