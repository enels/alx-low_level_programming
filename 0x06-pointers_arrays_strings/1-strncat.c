#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination to put the concatenated string
 * @src: string to slice characters to concatenate to dest
 * @n: number of characters from src to concatenate to dest
 *
 * Return: char pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* move to the end of the dest string */
	while (*dest != '\0')
	{
		dest++;
	}

	while (n != 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	return (dest_ptr);
}
