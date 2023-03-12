#include <stdio.h>

/**
 * fibonnaci_sum_even - sums the even fibonnaci number below 4,000,000
 *
 * Return: nothing
 */

#define LIMIT 4000000

void fibonnaci_sum_even(void)
{
	
	long int prev = 1; /* initialize the previous */
	long int current = 2; /* initialize the current */
	int old_prev; /* previous before the current previous */
	long int count;
	unsigned long sum = 0;

	for (count = 0; count < LIMIT; count++)
	{ 
		old_prev = prev; /* the previous before the previous cum current */
		prev = current; /* stores the current as the previous */

		if (prev % 2 == 0 && current % 2 == 0)
		{ 
			/* sums the even numbers */
			sum += old_prev + prev;
		}

		current = prev + old_prev; /* sum up the previous and the old previous */ 
	} 
	printf("%lu\n", sum);
}
