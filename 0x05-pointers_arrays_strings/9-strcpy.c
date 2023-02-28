#include "main.h"

/**
 * _strcpy - a function that is use to copy strings
 *
 * @dest: copy destination
 *
 * @src: sourse string
 *
 * Return: returns pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}

