#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size in bytes of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr = malloc(sizeof(int) * nmemb * size);

	if (arr == NULL || nmemb == 0 || size == 0)
	{
		return ((void *)NULL);
	}

	return ((void *)arr);
}
