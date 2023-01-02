#include "main.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to locate the character
 * @c: character to locate in string
 *
 * Return: pointer to the first occurrence of the char in the string
 */

char *_strchr(char *s, char c)
{
	/* assume the character hasn't been found */
	bool found = false;

	while (*s != '\0' && !found)
	{
		if (*s == c)
		{
			found = true;
		}

		s++;
	}

	if (*s == '\0')
	{
		return ((char *)NULL);
	}

	s--;
	return (s);
}
