#include <stdio.h>

/**
 * main - prints name of program
 * @argv: array of cmd line argument
 * @argc: count of cmd line arguments
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	char *s = argv[0];

	if (argc == 1)
	{
		printf("%s\n", s);
	}

	return (0);
}
