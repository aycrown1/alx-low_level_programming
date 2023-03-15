#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arr of chars, initializes it with a specific char.
 *
 * @size: the size of the array to create
 *
 * @c: the character to initialize the array with.
 *
 * Return: NULL if size is 0, otherwise a pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

