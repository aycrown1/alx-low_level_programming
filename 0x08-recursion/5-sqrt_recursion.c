#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int start = 0;
	int end = n;
	int mid;

	if (n == 0 || n == 1)
	{
		return n;
	}
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
		{
			return mid;
		}
		if (mid * mid < n)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return -1;
}
