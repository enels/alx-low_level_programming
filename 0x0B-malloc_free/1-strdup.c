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
	int index;

	if (str == NULL)
	{
		return (NULL);
	}
	else if (*str == '\0')
	{
		return ("");
	}

	while (*str != '\0')
	{
		str_size++;
		str++;
	}

	new_str_loc = malloc(sizeof(char) * str_size);

	for (index = 0; index <= str_size; index++)
	{
		new_str_loc[index] = *str_ptr;
		str_ptr++;
	}

	return (new_str_loc);
}
