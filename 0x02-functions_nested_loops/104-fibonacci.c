#include <stdio.h>

/**
 * fibonnaci50 - prints the first 50 fibonacci numbers
 *
 * Return: nothing
 */

#define LIMIT 98

void fibonnaci98(void)
{
	long int prev = 1; /* initialize the previous */
	long int current = 2; /* initialize the current */
	int old_prev; /* previous before the current previous */
	int count;

	printf("%li, %li ", prev, current);

	for (count = 0; count < LIMIT - 2; count++)
	{ 
		printf(", ");

		old_prev = prev; /* the previous before the previous cum current */

		prev = current; /* stores the current as the previous */

		current = prev + old_prev; /* sum up the previous and the old previous */

		printf("%li", current);
	}

	printf("\n");
}
