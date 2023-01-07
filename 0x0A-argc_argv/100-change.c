#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min num of coins to make a change
 * @argv: array containing the number of arguments
 * @argc: count of arguments
 *
 * Return: 1 if argc != 1, otherwise 0
 */

int main(int argc, char **argv)
{
	int cents = 0;
	int amount;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount >= 25)
	{
		cents += amount / 25;
		amount = amount % 25;
	}
	if (amount >= 10)
	{
		cents += amount / 10;
		amount = amount % 10;
	}
	if (amount >= 5 && amount < 10)
	{
		cents += amount / 5;
		amount = amount % 5;
	}
	if (amount < 5 && amount > 0)
	{
		cents += amount;
	}

	printf("%d\n", cents);

	return (0);
}
