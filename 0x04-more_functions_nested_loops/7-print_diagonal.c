#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times character '\' should be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int upper_count; /* number of lines to form the diagonal */
	int inner_count; /* number of char per line encountered */

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (upper_count = 0; upper_count < n; upper_count++)
	{
		for (inner_count = 0; inner_count <= upper_count; inner_count++)
		{
			if (inner_count != upper_count)
			{
				_putchar(' '); /* still before the last digit */
			}
			else
			{
				_putchar('\\'); /* last digit */
			}
		}
		_putchar('\n');
	}
}
