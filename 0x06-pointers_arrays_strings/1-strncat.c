#include "main.h"

/**
 * _strncat - string concatination with n as the length from src
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of bytes
 * Return: result
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (result);
}

