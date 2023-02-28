#include "main.h"

/**
 *swap_int - a function that swap the values of two variables
 *
 * using there pointer
 *
 * @a: first pointer
 *
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
