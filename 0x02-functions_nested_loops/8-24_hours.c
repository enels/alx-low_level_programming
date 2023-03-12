#include "main.h"

/**
 * jack_bauer - prints out every minute and hour of the day
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int h1; /* left side of the hour digit */
	int h2; /* right side of the hour digit */
	int m1; /* left side of the minute digit */
	int m2; /* right side of the minute digit */

	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		h1 = hr / 10;
		h2 = hr % 10;

		for (min = 0; min < 60; min++)
		{
			m1 = min / 10;
			m2 = min % 10;

			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');
		}
	}
}
