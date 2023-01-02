#include "main.h"
#include <stdbool.h>

/**
 * _strspn - returns the number of chars in the str that contains a substr
 * @s: the string to be checked
 * @accept: string to for its occurrence in s
 *
 * Return: the number of chars in str that contains the char
 */

unsigned int _strspn(char *s, char *accept)
{
	int char_count = 0;
	char *s_ptr = s;
	bool found = false;
	int max_pos = 1;

	while (*accept != '\0')
	{
		/* alway sets the string pointer to the beginning */
		s = s_ptr;

		/* character count of s in each character of accept to check */
		char_count = 1;
		while (*s != '\0' && !found)
		{
			/* found the char */
			if (*s == *accept)
			{
				/* sets the maximum position to the current char count */
				if (char_count > max_pos)
				{
					max_pos = char_count;
				}

				found = true;
			}
			/* increment the character count */
			char_count++;

			/* move pointer to next char */
			s++;
		}

		/* reset it to false for search of another char */
		found = false;

		/* move pointer to next char of word to check */
		accept++;

	}

	return (max_pos);
}
