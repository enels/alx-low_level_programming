#include <stdio.h>

/**
 * main - contains main code for printing out alphabet chars
 * in lower case in reverse order
 *
 * Return: Returns 0 when successful
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);

}
