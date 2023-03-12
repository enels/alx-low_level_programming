#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print and return the last digit of a number
 * @n: number to return its last digit
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int l_digit;

	if (n < 0)
	{
		n *= -1;
	}

	l_digit = n % 10;

	_putchar('0' + l_digit);

	return (l_digit);
}
