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

	while (*str != '\0')
	{
		str_size++;
		str++;
	}

	if (str_size == 0)
	{
		return ("");
	}

	/* space for null char */
	str_size++;

	/* allocate memory */
	new_str_loc = malloc(sizeof(char) * str_size);

	/* check for mem alloc error */
	if (new_str_loc == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= str_size; index++)
	{
		new_str_loc[index] = *str_ptr;
		str_ptr++;
	}

	return (new_str_loc);
}
