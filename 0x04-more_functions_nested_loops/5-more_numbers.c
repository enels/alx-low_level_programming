#include "main.h"

/**
 * more_numbers - print 10 times the numbers btw 0 and 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int upper_count;
	int count;
	int result;

	for (upper_count = 0; upper_count <= 9; upper_count++)
	{
		for (count = 0; count <= 14; count++)
		{
			result = count; /* stores the result */

			if (count > 9) /* checks if its a 2 digits number */
			{
				_putchar('0' + result / 10); /* get the right digit */
				result %= 10; /* get the left most digit */
			}

			_putchar('0' + result);
		}
		_putchar('\n'); /* newline before the next line */
	}
}
