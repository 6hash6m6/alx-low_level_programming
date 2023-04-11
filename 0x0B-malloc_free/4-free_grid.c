#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - ep
 * @grid: pint
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
