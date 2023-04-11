#include "main.h"

/**
 * flip_bits - returns the number of bits
 *		you would need to flip to get from one number to another.
 * @n: an unsigned long integer representing the first number.
 * @m: an unsigned long integer representing the second number.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}

