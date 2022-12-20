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
	char c;

	while (c != '\0')
	{
		length++;
		s++;
		c = *s;
	}

	return (length);
}
