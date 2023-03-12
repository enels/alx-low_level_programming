#include "main.h"

/**
 * print_numbers - print numbers 0 thru 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int limit = 9;
	int count;

	for (count = 0; count <= limit; count++)
	{
		_putchar('0' + count);
	}
}
