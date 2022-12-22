#include "main.h"

/**
 * string_toupper - convert string to upper
 * @str: string to be converted to upper
 *
 * Return: return pointer to the converted string
 */


char *string_toupper(char *str)
{
	char *str_ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		
		str++;
	}

	return str_ptr;
}
