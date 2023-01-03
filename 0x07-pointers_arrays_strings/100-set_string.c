#include "main.h"

/**
 * set_string - set the pointer to char
 * @s: address to point
 * @to: pointer to set
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	if (*to != '\0' && **s != '\0')
	{
		*s = to;
	}
}
