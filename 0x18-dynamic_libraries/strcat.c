#include "main.h"

/**
 * _strcat - concatenate strings
 *
 * @dest: string destination
 *
 * @src: string source
 * Return: concatenated result in dest
 *
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
