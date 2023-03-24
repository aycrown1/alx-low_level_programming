#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: count of parameters
 * Return: the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value, sum;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}

	va_end(args);
	return (sum);
}

