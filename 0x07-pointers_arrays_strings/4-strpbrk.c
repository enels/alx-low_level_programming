#include "main.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: string to search
 * @accept: string to search for
 *
 * Return: pointer to the start of bytes in s to the end of s
 */

char *_strpbrk(char *s, char *accept)
{
	bool found = false;
	char *accept_ptr = accept;

	while (*s != '\0' && !found)
	{
		/* sets accept to begnning of string */
		accept = accept_ptr;
		while (*accept != '\0' && !found)
		{
			if (*accept == *s)
			{
				found = true;
			}
			accept++;
		}

		s++;
	}
	if (*s == '\0' && !found)
	{
		return ((char *)NULL);
	}
	s--;
	return (s);
}
