#include "main.h"

/**
 * puts2 - prints even characters
 * @str: string to print its even chars
 *
 * Return: void
 */

void puts2(char *str)
{
	int char_count = 0;
	char c;

	c = *str;
	while (c != '\0')
	{
		if (char_count == 0)
			_putchar(c);
		else if (char_count % 2 == 0)
			_putchar(c);

		++str;
		c = *str;
		char_count++;
	}

	_putchar('\n');
}
