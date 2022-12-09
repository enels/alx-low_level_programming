#include <stdio.h>
#include <ctype.h>

/**
 * main - contains main code for printing out alphabet chars in lower case
 *
 * Return: Returns 0 when successful
 */

int main(void)
{
	char c = 'A';

	while (c <= 'z')
	{
		/* when it's upper changes to lower */
		if (c >= 'A' && c <= 'Z')
			putchar(tolower(c));
		/* when it's lower changes to upper */
		else if (c >= 'a' && c <= 'z')
			putchar(toupper(c));
		/* move to the next character */
		c++;
	}

	putchar('\n');

	return (0);

}
