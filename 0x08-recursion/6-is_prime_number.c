#include "main.h"

/**
 * recursor - the functiom that uses recursion to check
 *		whether an input integer is a prime number.
 * @n: input integer.
 * @divisor:  a possible divisor of the input integer n.
 * Return: 1 if n is a prime number, 0 otherwise
 */
int recursor(int n, int divisor)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (recursor(n, divisor + 1));
}

/**
 * is_prime_number - Check whether n is a prime number
 * @n: input integer.
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return (recursor(n, 2));
}


