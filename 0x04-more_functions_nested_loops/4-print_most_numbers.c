#include "main.h"

/**
 * print_most_numbers - print numbers 0 thru 9 excluding 2 && 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int limit = 9;
	int count;

	for (count = 0; count <= limit; count++)
	{
		if (count != 2 && count != 4)
		{
			_putchar('0' + count);
		}
	}

	_putchar('\n');
}
