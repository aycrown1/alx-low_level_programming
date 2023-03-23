#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 *  on each element of an array
 *
 * @array: an integer of arrays
 * @size: size of array.
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)

		(*action)(array[i]);
}
