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
		/*Handle negative numbers*/
		putchar('-');
		n = -n;
	};
	while (n / divisor >= 10)
		/**
		 * Finding the power of 10 that is dibvisible
		 * and less than by n to get the first digit
		 */
	{
		divisor *= 10;
	};
	while (divisor != 0)
		/* To control the divisor when it 0, then print the last digit*/
	{
		putchar((n / divisor) % 10 + '0');
		divisor /= 10;
		/* Decreases the power of 10, after a digit is printed*/
	};
}
