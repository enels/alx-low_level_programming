#include <stdlib.h>

/**
 * free_grid - free up memory allocated to a 2D array
 * @grid: 2d array
 * @height: num of rows
 *
 * Return: void
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
