#include "main.h"

/**
 * print_sign - checks the sign nature of a number
 * @n: number to check
 *
 * Return: 1 if number is > 0, -1 if number is < 0, and 0 if number is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
