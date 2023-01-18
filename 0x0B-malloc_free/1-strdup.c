#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated space
 * @str: string to be copied
 *
 * Return: pointer to the memory location containing the strinng
 */

char *_strdup(char *str)
{
	int str_size = 0;
	char *str_ptr = str;
	char *new_str_loc;

	while (*str != '\0')
	{
		str_size++;
		str++;
	}

	if (str_size == 0)
	{
		return (NULL);
	}

	new_str_loc = malloc(sizeof(char) * str_size);

	for (int index; index <= str_size; index++)
	{
		new_str_loc[index] = *str_ptr;
		str_ptr++;
	}

	return (new_str_loc);
}
