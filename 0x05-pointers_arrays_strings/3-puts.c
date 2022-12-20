#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find the length
 *
 * Return: string length
 */

int _strlen(char *s)
{
	char c;

	c = *s;
	while (c != '\0')
	{
		s++;
		c = *s;
		_putchar(c);
	}

	return (length);
}
