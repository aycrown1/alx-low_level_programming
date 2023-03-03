#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string.
 *
 * @dest: string destination
 *
 * @src: source string
 *
 * @n: number of bytes
 *
 * Return: the dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *origDest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		n--;
		*dest++ = '\0';
	}
	return (origDest);
}
