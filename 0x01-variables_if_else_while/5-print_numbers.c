#include <stdio.h>

/**
 * main - prints numbers 0 through 9
 *
 * Return: return a 0 for success
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
		printf("%d", n++);

	printf("\n");

	return (0);
}
