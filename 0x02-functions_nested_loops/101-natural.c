#include <stdio.h>

/**
 * natural - prints the sum of the multiples of 3 and 5 below 1024 (exclusive)
 *
 * Return: nothing
 */

#define MAX_NUM 1024

void natural(void)
{
	int start;
	int sum;
	
	for (start = 0; start < MAX_NUM; start++)
	{
		if (!(start % 3) || !(start % 5))
		{
			sum += start;
		}
	}

	printf("%d\n", sum);
}
