#include "main.h"

/**
 * wildcmp - compaes 2 strings
 * @s1: first string to comp
 * @s2: second string to comp
 *
 * Return: 1 if strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' || *s1 != '\0')
	{
		if (*s2 == '\0')
		{
			s1++;
		}
		else
		{
			s1++, s2++;
		}

		wildcmp(s1, s2);
	}

	if (*s1 == '\0' || *s2 == '\0' || *s2 == '*')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
