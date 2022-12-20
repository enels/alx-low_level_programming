#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find the length
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		*s++;
	}

	return (length);
}
