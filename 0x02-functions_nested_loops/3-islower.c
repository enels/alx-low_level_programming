#include "main.h"

/**
 * 3-islower.c - checks if a character is a lower case
 *
 * Return: 1 if character is lower and 0 if it's upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	if (c >= 'A' && c <= 'Z')
		return 0;
}
