#include <stdlib.h>

/**
 * array_iterator - executes a func given as a parameter on each array ele
 * @array: array ptr
 * @size: array size
 * @action: func ptr
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int arg))
{
	size_t size_count = (size_t)0;
	int i = 0;

	while (size_count < size)
	{
		action(array[i]);
		size_count++;
		i++;
	}
}
