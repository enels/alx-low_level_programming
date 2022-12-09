#include <stdio.h>

/**
 * main - contains main code for printing out alphabet chars in lower case
 *
 * Return: Returns 0 when successful
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);

}
