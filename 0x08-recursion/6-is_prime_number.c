#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
