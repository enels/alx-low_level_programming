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
	int start_index, end_index;
	char c[80];

	/* get the length of the string */
	c[length_of_s] = *s;
	while (c[length_of_s] != '\0')
	{
		length_of_s++;
		s++;
		c[length_of_s] = *s;
	} 

	start_index = length_of_s - 1;
	end_index = 0;

	while (start_index >= end_index)
	{
		_putchar(c[start_index]);
		start_index--;
	}
	
	_putchar('\n');
}
