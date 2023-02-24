#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		/* prints minus if n is less than 0 */
		n = -n;
	};	/* changes negative n to absolute */
	if (n / 10 != 0)
	{
		print_number(n / 10);
		/* prints n recursively until n is less that 0 */
	};
	putchar((n % 10) + '0');
}
