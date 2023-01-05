#include "main.h"

/**
 * factorial - finds the factorial of a given number recursively
 * @n: number to find its factorial
 *
 * Return: the factorial in int. if n is -1 then return -1 (error).
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
