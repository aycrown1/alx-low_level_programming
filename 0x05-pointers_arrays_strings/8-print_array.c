#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints element of an array
 *
 * @a: the pointer of the array
 *
 * @n: the number of element in array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

