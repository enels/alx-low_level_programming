#include "main.h"

/**
 * print_number - prints integers
 * @n: integer to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	int n2 = n;
	int tens = 1;

	/* check if it's a negative number */
	if (n < 0)
	{
		n *= -1;
		/* reassign n2 a positive value */
		n2 = n;
		_putchar('-');
	}

	/* iterate thru the get the number of 10s */
	while (n / 10 != 0)
	{
		n /= 10;
		tens *= 10;
	}

	/* iterate thru to get the numbers beginning from the left most */
	while (tens / 10 != 0)
	{
		/* get the left most */
		_putchar('0' + (n2 / tens));

		/* truncate the left most */
		n2 %= tens;

		/* reduce the tens */
		tens /= 10;
	}

	/* prints the last digit */
	_putchar('0' + n2);
}
