#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: string to encode
 *
 * Return: return pointer to the encoded string
 */

char *leet(char *str)
{
	char *str_ptr = str;
	char c_arr[5] = {'a', 'e', 'o', 't', 'l'};
	char i_arr[5] = {'4', '3', '0', '7', '1'};
	int index;

	while (*str != '\0')
	{
		index = 0;
		while (index < 5)
		{
			/* checks if it's equal to any of the character index */
			if (*str == c_arr[index])
			/* change the character to the equivalent string integer */
				*str = i_arr[index];

			index++;
		}
		str++;
	}

	return (str_ptr);
}
