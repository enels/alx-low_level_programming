#include <stdio.h>
#include "main.h"

/**
 * print_array - print n element of an array followed by a new line
 * @a: pointer the array
 * @n: number of elements in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	if (n == 0 || n == -1)
		printf("%i\n", a[0]);
	else
	{
		for (index = 0; index <= n-1; ++index)
		{
			if (index != n - 1)
				printf("%d, ", a[index]);
			else
				printf("%d\n", a[index]);
		}
	}
}
