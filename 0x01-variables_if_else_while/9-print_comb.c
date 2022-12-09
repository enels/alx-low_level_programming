#include <stdio.h>

/**
 * main - prints numbers 0 through 9
 *
 * Return: return a 0 for success
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);

		if (c == '9')
			putchar('$');
		else
			putchar(',');

		c++;
	}

	putchar('\n');

	return (0);
}
