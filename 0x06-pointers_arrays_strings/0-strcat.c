#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: where to put concatenated string
 * @src: string to concatenate with dest
 *
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest_ptr);
}
