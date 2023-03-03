#include "main.h"
#include  <string.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: the array
 *
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	/* Swap elements from the two ends of the array until i >= j */
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

