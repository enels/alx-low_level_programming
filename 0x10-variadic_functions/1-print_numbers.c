#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - variadic func that print numbers
 * @separator: number separator
 * @n: initial number of the series of numbers to print out
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i == (n - 1))
		{
			printf("%d", num);
		}
		else if (separator == (char *)NULL)
		{
			;
		}
		else
		{
			printf("%d%s", num, separator);
		}
	}
	va_end(args);

	printf("\n");
}
