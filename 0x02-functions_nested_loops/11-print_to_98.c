#include <stdio.h>

/**
 * print_to_98 - print numbers up to 98
 * @n: digit to start from
 *
 * Return: nothing
 */

#define MAX 98

void print_to_98(int n)
{
	--n;

	do
	{
		if (n > MAX)
		{
			--n;
		}
		else
		{
			++n;
		}

		if (n != MAX)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	while(n != MAX);

	printf("\n");
}
