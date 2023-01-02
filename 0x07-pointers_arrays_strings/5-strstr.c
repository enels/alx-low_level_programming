#include "main.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search from
 * @needle: string to search for
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int pos = 0;
	char *needle_ptr = needle;
	bool found = false;


	while (*haystack != '0' && !found)
	{
		pos++;
		/* haystack equal to first letter of needle */
		needle_ptr = needle;
		if (*haystack == *needle_ptr)
		{
			found = true;
			while (*needle != '\0' && found)
			{
				haystack++, needle++;
			}
			/* if it got to the end of the needle */
			/* needle found in haystack */
			if (*needle == '\0')
			{
				found = true;
			}
		}

		haystack++;
	}

	/* word wasn't found in haystack */
	if (*haystack == '\0' && !found)
	{
		return ((char*)NULL);
	}
	return (haystack);
}
