#include <stdio.h>

/**
 * main - prints the numbers 1-100, followed by a new line. Multiples of
 * 3 print Fizz and multiples of 5 print Buzz. For numbers that are multiples
 * of both print FizzBuzz
 *
 * Return: always 0
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (!(count % 3) && (count % 5)) /* multiple of 3 found */
		{
			printf("Fizz ");
		}
		else if ((count % 3) && !(count % 5)) /* multiple of 5 found */
		{
			printf("Buzz ");
		}
		else if (!(count % 3) && !(count % 5)) /* multiple of 3 and 5 found */
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", count);
		}
	}

	printf("\n");

	return (0);
}
