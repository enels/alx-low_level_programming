#include <stdio.h>

/**
 * main - prints the number of argument passed to it
 * @argv: array pointing to the argumeents
 * @argc: count of number of args
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int count = 0;

	if (argv[0])
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}

	return (0);
}
