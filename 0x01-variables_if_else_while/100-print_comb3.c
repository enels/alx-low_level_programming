#include <stdio.h>

/**
 * main - print out the possible combination of two digits
 * in ascending order
 *
 * Return: 0 as success
 */

int main(void)
{
	int c, c2;

	for (c = '0'; c < '9'; c++)
		for (c2 = '0'; c2 <= '9'; ++c2)
		{
			if (c == c2 || c > c2)
				;
			else
			{
				putchar(c);
				putchar(c2);
				if (c != '8')
					putchar(',');
			}
		}

	putchar('\n');

	return (0);
}
