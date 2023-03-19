#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 *
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: returns a pointer to the newly reallocated memory block.
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}

