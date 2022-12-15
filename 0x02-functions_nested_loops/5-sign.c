#include "main.h"

/**
 * print_sign - checks the sign nature of a number
 * @n: number to check
 *
 * Return: + if number is > 0, - if number is < 0, and 0 if number is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return ('+');
	}

	if (n < 0)
	{
		_putchar('-');
		return ('-');
	}

	if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
}
