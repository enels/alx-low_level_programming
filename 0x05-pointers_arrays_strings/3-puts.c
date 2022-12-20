#include <stdio.h>

/**
 * _puts - returns the length of a string
 * @s: string to find the length
 *
 * Return: void
 */

int _puts(char *s)
{
	char c;

	c = *s;
	while (c != '\0')
	{
		s++;
		c = *s;
		_putchar(c);
	}

}
