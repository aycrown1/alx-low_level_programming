#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 *
 * @s: the pointer
 * @b: the constant bytes
 * @n: the number of bytes to be filled in the memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}

	return (s);
}
