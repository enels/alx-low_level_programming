#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplying 2 nums
 * @argv: pointer to array containing the nums
 * @argc: count of the args
 *
 * Return: 0 if success, otherwise return 1 and print Error
 */

int main(int argc, char **argv)
{
	long n1;
	long n2;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%ld\n", n1 * n2);

	return (0);
}
