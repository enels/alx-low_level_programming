#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print variable amount of strings
 * @separator: string separator
 * @n: number of strings passed
 *
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args; /* create a list for the arguments */

	va_start(args, n); /* initialize the process with the req. amt of args */
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *); /* assign the value of the arguments */
		if (i == (n - 1))
		{
			printf("%s", str); /* last string */
		}
		else
		{
			if (str == NULL) /* str is NULL */
			{
				printf("(nil)");
			}
			else if (separator == (char *)NULL) /* separator is NULL */
			{
				printf("%s", str);
			}
			else
			{
				printf("%s%s", str, separator);
			}
		}
	}
	va_end(args); /* stop the iteration */

	printf("\n");
}
