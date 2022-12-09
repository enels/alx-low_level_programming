#include <stdio.h>

/**
 * main - contains main code for printing alphabets excluding q and e
 *
 * Return: Returns 0 when successful
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			;
		else
			putchar(c);

		c++;
	}

	putchar('\n');

	return (0);

}
