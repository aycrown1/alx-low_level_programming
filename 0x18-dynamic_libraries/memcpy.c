#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 *
 * @dest: memory area destination
 *
 * @src: memory area source
 *
 * @n: numbers of bytes to be copied
 *
 * Return: Returns a pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n--)
	{
		*ptr_dest++ = *ptr_src++;
	}

	return (dest);
}
