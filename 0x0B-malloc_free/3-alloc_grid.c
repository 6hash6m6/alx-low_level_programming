#include "main,h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - ep
 * @width: int
 * @height: int
 * Return: matrix;
 */

int **alloc_grid(int width, int height)
{
	int **matrix, *p, i, j, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix =(int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[l][j] = 0;
		}
	}

	return (matrix);
}
