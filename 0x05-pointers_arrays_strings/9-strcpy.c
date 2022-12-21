#include "main.h"

/**
 * _strcpy - copies one string from one source onto another destination
 * @dest: destination to copy string onto
 * @src: source to copy string from
 *
 * Return: pointer to the destination that contains copied string - dest
 */

char *_strcpy(char *dest, char *src)
{
	/* points to the beginning of the destination */
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		/* copy each value from source to destination */
		*dest = *src;
		/* move the next memory location */
		++src;
		++dest;
	}

	/* sets the last character to null */
	*dest = '\0';

	return (dest_ptr);
}
