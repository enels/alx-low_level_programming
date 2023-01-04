#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: string to print in reverse order
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char first_char = s[0];
	static int len = 1;

	if (len == 1)
	{
		while (*s != '\0')
		{
			s++;
			len++;
		}
	}

	s--;
	if (*s == first_char)
	{
		_putchar(*s);
		return;
	}
	else
	{
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
