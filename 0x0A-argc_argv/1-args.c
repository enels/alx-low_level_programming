#include <stdio.h>

/**
 * main - prints the number of argument passed to it
 * @argv: array pointing to the argumeents
 * @argc: count of number of args
 *
 * Return: 0 if success
 */

int main (int argc, char **argv)
{
	if (argv[0])
	{
		/*while (count < argc)
		{
			printf("%s ", argv[count]);
			count++;
		}*/

		printf("%d\n", argc - 1);
	}

	return (0);
}
