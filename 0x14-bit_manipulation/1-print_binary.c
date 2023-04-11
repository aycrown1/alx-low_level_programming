#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	for (i = 0; i < 63; i++)
	{
		if ((n >> i) == 0)
			break;
	}

	while (i >= 0)
	{
		_putchar((n >> i) & mask ? '1' : '0');
		i--;
	}
}

