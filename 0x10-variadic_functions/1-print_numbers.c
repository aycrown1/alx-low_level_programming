#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -  function that prints numbers
 * @separator: separator character
 * @n: the number of integers to print
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	putchar('\n');
}

