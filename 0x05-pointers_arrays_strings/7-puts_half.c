#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print half of its characters
 *
 * Return: return a void
 */

void puts_half(char *str)
{
	int len_of_str = 0, n;
	char c;
	char *str_p = str;

	c = *str;
	while (c != '\0')
	{
		len_of_str++;
		++str;
		c = *str;
	}

	/* get half the characters - from middle to end */

	if (len_of_str % 2 == 0)
		n = len_of_str / 2;
	else
		n = (len_of_str - 1) / 2;

	while (n <= len_of_str)
	{
		_putchar(str_p[n]);
		++n;
	}

	_putchar('\n');
}
