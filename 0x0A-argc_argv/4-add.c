#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argv: array containing the numbers
 * @argc: count the numbers
 *
 * Return: 0 if success, 1 if non-digits are passed, -1 if no number is passed
 */

int main(int argc, char **argv)
{
	int result = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (-1);
	}

	argc -= 1;
	while (argc >= 0)
	{
		num = atoi(argv[argc]);

		if (isalpha(*argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		/* test its sign */
		if (num > 0)
		{ 
			result += num;
		}
		--argc;
	}

	printf("%d\n", result);

	return (0);
}
