#include <stdlib.h>

/**
 * alloc_grid - allocates memory to 2D array
 * @width: array row
 * @height: array column
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array_ptr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		array_ptr[i] = malloc(sizeof(int *) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_ptr[i][j] = 0;
		}
	}

	/* fill the array with values */
	return (array_ptr);
}
