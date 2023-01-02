#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *dest_ptr = dest;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest_ptr);
}
