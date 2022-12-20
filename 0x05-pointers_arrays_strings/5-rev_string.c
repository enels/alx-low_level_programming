#include <stdio.h>
#include "main.h"

/**
 * rev_string - print the reverse of a string
 * @s: string argumeent to print the reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int mid_value, counter, length_of_s = 0;
	char c, temp;
	char *p = s;

	/* get the length of the string */
	c = *s;
	while (c != '\0')
	{
		length_of_s++;
		s++;
		c = *s;
	}

	mid_value = length_of_s / 2;
	counter = 0;
	s--;
	while (counter <= mid_value - 1)
	{
		temp = *s;
		*s = p[counter];
		p[counter] = temp;
		counter++;
		s--;
	}
}
