#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: array lower boundary
 * @max: array upper boundary
 *
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *arr_ptr;

	if (min > max)
	{
		return (NULL);
	}

	arr_ptr = malloc(sizeof(int) * (max - min));

	if (arr_ptr != NULL)
	{
		return (arr_ptr);
	}
	else
	{
		return (NULL);
	}
}
