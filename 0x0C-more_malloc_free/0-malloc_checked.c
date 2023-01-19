#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: amount of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p_mem = malloc(sizeof(int) * b);

	if (p_mem == NULL)
	{
		return ((void *)98);
	}

	return (p_mem);
}
