#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, or -1 if n does not have
 *    a natural square root
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	root = _sqrt_recursion(n / 4) * 2;
	if (root * root <= n && (root + 1) * (root + 1) > n)
	{
		return (root);
	}
	if (root * root < n)
	{
		return (root + 1);
	}
	return (-1);
}
