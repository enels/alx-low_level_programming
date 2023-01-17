#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of memory to allocate
 * @c: char to initialize the array with
 *
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(int) * size);
	unsigned int count;

	count = 0;
	if (arr != NULL)
	{
		while (count < size)
		{

			arr[count] = c;
			count++;
		}
	}

	return (arr);
}
