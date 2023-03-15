#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: specify demension of array
 *
 * @height: specify demension of array
 *
 * Return: NULL If either parameter is 0 or negative, the function
 * returns a pointer to the array of pointers to integers.
 *
 */


int **alloc_grid(int width, int height)
{
	int i, j, k, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}
	return (grid);
}

