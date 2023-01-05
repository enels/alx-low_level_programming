#include "main.h"

/**
 * is_prime_number - recursively check for prime number
 * @n: number to check
 *
 * Return: 1 if is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	if (n > 0)
	{
		if (is_prime_number(n - 1) % 2 == 0 && n != 2)
		{
			return (0);
		}
		else
		{
			return (n);
		}
	}

	return (1);

}
