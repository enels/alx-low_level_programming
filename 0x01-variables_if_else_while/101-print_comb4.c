#include <stdio.h>

/**
 * main - print out the possible combination of two digits
 * in ascending order
 *
 * Return: 0 as success
 */

int main(void)
{
	int c, c2, c3;

	for (c = '0'; c < '9'; c++)
		for (c2 = '0'; c2 <= '9'; ++c2)
			for (c3 = '0'; c3 <= '9'; ++c3)
			{
				if (c == c2 || c > c2 || c == c3 || c2 == c3 || c2 > c3)
					;
				else
				{
					putchar(c);
					putchar(c2);
					putchar(c3);
					if (c != '7' && c2 != 8 && c3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

	putchar('\n');

	return (0);
}
