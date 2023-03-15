#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by the alloc_grid function.
 *
 * @grid:a pointer to the 2-dimensional array of integers previously created
 *
 * @height: height of the array
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

