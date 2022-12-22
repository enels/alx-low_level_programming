#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string to compare
 * @s2: second string to compare with first string
 *
 * Return: 0 if s1 == s2, -1 if s1 < s2, and 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 > *s2)
			return (1);
		else if (*s2 > *s1)
			return (-1);

		++s1;
		++s2;
	}

	if (*s1 == '\0' && *s2 != '\0')
		return (-1);
	else if (*s2 == '\0' && *s2 != '\0')
		return (1);

	return (0);
}
