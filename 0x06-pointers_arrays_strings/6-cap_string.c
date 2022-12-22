#include "main.h"
#include <stdbool.h>

/**
 * cap_string - change first character of every string to caps
 * @str:  string to convert its first character
 *
 * Return: pointer to the converted string
 */

char *cap_string(char *str)
{
	/* pointer to the string pointer origin */
	char *str_ptr = str;
	/* checks if it's now in a word */
	bool in_word = false;

	while (*str != '\0')
	{
		/* checks if the char is a non alphabetic char */
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
		{
			/* not inside a word */
			in_word = false;
		} 
		/* not in word still but seen first alphabetic character*/
		else if (!in_word)
		{
			/* CODE SEGMENT IN WORD */
			/* if it's uppercase, do nothing */
			if (*str >= 'A' && *str <= 'Z')
					;
			/* first char is lower, convert it to uppercase */
			else
			{
				*str = *str - 'a' + 'A';
			}
			/* set it to be in word */
			in_word = true;
		}
		str++; 
	}

	return str_ptr;
}
