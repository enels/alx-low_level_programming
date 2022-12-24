#include "main.h"
#include <stdbool.h>

/**
 * print_number - prints an integer
 * @n: number to print out
 *
 * Return: void
 */

void print_number(int n)
{
	int rem, new_n;
	bool negative_n;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			negative_n = true;
		}
		new_n = 0;
		while (n != 0)
		{
			rem = n % 10;
			new_n += rem;
			new_n *= 10;
			n /= 10;
		}
		new_n /= 10;
		if (negative_n)
		{
			_putchar('-');	
		}

		while (new_n!= 0)
		{
			rem = new_n % 10;
			_putchar('0' + rem);
			new_n /= 10;
		}
	}
}
