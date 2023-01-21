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
	num = n;
	for (i = 0; i <= n; i++)
	{
		if (i == (n))
		{
			printf("%d", num);
		}
		else if (separator == NULL)
		{
			;
		}
		else
		{
			printf("%d%s", num, separator);
		}
		num = va_arg(args, int);
	}
	va_end(args);

	printf("\n");
}
