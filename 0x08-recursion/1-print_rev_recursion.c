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
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s); 
	}
	if (*s == first_char)
	{
		_putchar('\n');
	}
}
