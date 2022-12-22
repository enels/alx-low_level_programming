#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @src: string source
 * @dest: string destination
 * @n: number of characters to copy from src to dest
 *
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* variable to point to the beginnning of @dest */
	char *dest_ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (dest_ptr);
}
