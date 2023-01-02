#include "main.h"

/**
 * _memset - replaces memory with constant bytes
 * s: memory location of string to be replaced
 * b: character to fill the memory with
 * n: number of characters to replace in s
 *
 * Return: pointer to the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *s_ptr = s;
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s_ptr;
}
