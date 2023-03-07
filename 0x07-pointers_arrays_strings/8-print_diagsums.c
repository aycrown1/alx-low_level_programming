#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diag of a square matrix of ints.
 *
 * @a: first element of a square matrix of integers
 *
 * @size: the size of the matrix
 *
 */


void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += a[i * size + j];
	}

	printf("%d, %d\n", sum1);
}
