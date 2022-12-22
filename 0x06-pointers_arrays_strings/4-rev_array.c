#include <stdio.h>
#include "main.h"

/**
 * reverse_array - print the reverse of a string
 * @a: int argumeent to print the reverse
 * @n: number of integer in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int *p = a, temp, counter = 0, mid_value;
	
	a = a + (n - 1);

	mid_value = n / 2;
	while (counter <= mid_value - 1)
	{
		temp = *a;
		*a = p[counter];
		p[counter] = temp;
		counter++;
		a--;
	}
}
