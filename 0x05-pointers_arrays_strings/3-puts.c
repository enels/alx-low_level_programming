#include <stdio.h>
#include "main.h"

/**
 * _puts - returns the length of a string
 * @s: string to print out
 *
 * Return: void
 */

void _puts(char *s)
{
	char c;

	c = *s;
	while (c != '\0')
	{
		_putchar(c);
		s++;
		c = *s;
	}

	_putchar('\n');
}
