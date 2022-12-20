#include <stdio.h>
#include "main.h"

/**
 * print_rev - print the reverse of a string
 * @s: string argumeent to print the reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length_of_s = 0;
	char c;

	/* get the length of the string */
	c = *s;
	while (c != '\0')
	{
		length_of_s++;
		s++;
		c = *s;
	}

	s--;
	c = *s;
	while (length_of_s != 0)
	{
		_putchar(c);
		s--;
		c = *s;
		length_of_s--;
	}

	_putchar(c);
	_putchar('\n');

}
