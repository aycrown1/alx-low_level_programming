#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
