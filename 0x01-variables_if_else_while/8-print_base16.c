#include <stdio.h>

/**
 * main - prints numbers 0 through 9 and a-f
 *
 * Return: return a 0 for success
 */

int main(void)
{
	int c = '0';

	while (c <= 'f')
	{
		if (c > '9' && c < 'a')
			;
		else
			putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
