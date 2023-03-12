#include "main.h"

/**
 * times_table - prints out 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int times = 9;
	int times_count;
	int others;
	int answer;

	for (times_count = 0; times_count <= times; times_count++)
	{
		for (others = 0; others <= times; others++)
		{
			answer = others * times_count;

			if (answer >= 10)
			{
				_putchar('0' + answer / 10);
				_putchar('0' + answer % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + answer);
			}

			if (others < times)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
