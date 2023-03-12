#include "main.h"

/**
 * print_line - draws a straight line at the terminal
 * @n: length of line (number of dashes)
 *
 * Return: nothing
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (count = 0; count <= n; count++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
