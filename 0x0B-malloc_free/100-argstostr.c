#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all program arguments
 * @ac: argument count
 * @av: array to store the arguments
 *
 * Return: pointer to char
 */

char *argstostr(int ac, char **av)
{
	int row = 0;
	int word_len;
	int col, args_index;
	int sum_of_args_len = 0;
	char *args;

	if (ac == 0 || av == (char **)NULL) /* if nothing is passed as args */
	{
		return ((char *)NULL);
	}

	while (row < ac) /* get total length of each word */
	{
		sum_of_args_len += (int)strlen(av[row]);
		row++;
	}

	args = malloc(sizeof(char) * sum_of_args_len); /* alloc memory */

	if (args != (char *)NULL)
	{
		args_index = 0; /* initialize the concatenated args index */
		for (row = 0; row < ac; row++) /* iterate thru each word */
		{
			word_len = (int)strlen(av[row]); /* len of the current word */
			for (col = 0; col < word_len; col++, args_index++) /* iterate each char */
			{
				args[args_index] = av[row][col]; /* store each char */
			}
			args[args_index] = '\n'; /* newline as last char of word */
			args_index++; /* space for 1st char of next word */
		}
	}
	else
	{
		return ((char *)NULL);
	}

	return (args);
}
