#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Function to add two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to subtract two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to multiply two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the division of a by b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function to compute the modulo of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


