#include "main.h"

/**
 * print_times_table - prints out 9 times table
 * @n: times to calculate
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int times_count;
	int others;
	int answer;

	if (n > 0 && n <= 15)
	{
		for (times_count = 0; times_count <= n; times_count++)
		{
			for (others = 0; others <= n; others++)
			{
				answer = others * times_count; /* product answer */
				if  (answer >= 10 && answer <= 99) /* product <= 99 i.e 2 digits answer */
				{
					_putchar(' '); /* one space width */
					_putchar('0' + answer / 10);
					_putchar('0' + answer % 10);
				}
				else if (answer > 99) /* product > 99 i.e 3 digits answer */
				{
					_putchar('0' + answer / 100);
					answer %= 100;
					_putchar('0' + answer / 10);
					answer %= 10;
					_putchar('0' + answer);
				}
				else
				{
					_putchar(' '); /* two space width */
					_putchar(' ');
					_putchar('0' + answer);
				}
				if (others < n) /* within the number times range */
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
