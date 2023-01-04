#include "main.h"

/**
 * _puts_recursion - recusively prints out line
 * @s: string to print out
 * 
 * Return: void
 */

void _puts_recursion(char *s)
{
		
	if (*s != '\0')
	{
		_putchar(*s);
	}

	else
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
}
