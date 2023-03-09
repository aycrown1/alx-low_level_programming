#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural sqrt of n, or -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	sqrt = _sqrt_recursion(n / 2);
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else if (sqrt * sqrt < n)
	{
		if (n % 2 != 0)
		{
			sqrt = _sqrt_recursion(n / 2 + 1);
		}
		else
		{
			sqrt = _sqrt_recursion(n / 2);
		}
		if (sqrt * sqrt == n)
		{
			return (sqrt);
		}
		else if (sqrt * sqrt < n)
		{
			return (-1);
		}
		else
		{
			return (sqrt - 1);
		}
	}
	else
	{
		return (sqrt - 1);
	}
}
