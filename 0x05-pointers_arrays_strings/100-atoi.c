#include "main.h"
#include<stdio.h>
#include <stdbool.h>

/**
 * _atoi - converts string to integers
 * @s: string to convert
 *
 * Return: integer converted
 */

int _atoi(char *s)
{
	int index = 0, number = 0, initial_char_int_index = 0;
	bool end = false, is_char_int = false;

	if (s[0] == '\0')
		return number;

	/* skips none character integers */
	while (!(s[index] >= '0' && s[index] <= '9'))
	{
		index++;
		continue;
	}

	/* stores the first index where it encounters a character integer index */
	initial_char_int_index = index;

	/* loops through the string to check for */
	while (s[index] != '\0' && end != true)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			/* convert the character integer to integer */
			number += s[index] - '0';

			/* multiply the converted integer by 10 */
			number *= 10;

			/* notify program it has encountered a character integer */
			is_char_int = true;
		}
		else if (!(s[index] >= '0' && s[index] <= '9') && is_char_int == true)
			end = true;

		++index;
	}

	/* remove the trailing zero */
	number /= 10;

	if (s[initial_char_int_index - 1] == '-' && s[index] == '\0')
		number *= -1;

	return (number);
}
