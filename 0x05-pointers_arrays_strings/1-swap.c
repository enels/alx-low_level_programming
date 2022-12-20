#include <stdio.h>

/**
 * swap_int - swaps the values of two pointer variables
 * @a: First variable
 * @b: 2nd variable
 *
 * Return: void
 */



void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
