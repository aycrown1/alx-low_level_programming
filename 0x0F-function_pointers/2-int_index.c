#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: a integers of array.
 * @size: size of the array.
 * @cmp: A function pointer.
 *
 * Return: returns an integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);


for (i = 0; i < size; i++)

{
	if ((*cmp)(array[i]))
		return (i);

}

return (-1);
}

