#include "main.h"

/**
 * _strlen_recursion - recursively print the length of a string
 * @s: string to print its length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));

}
