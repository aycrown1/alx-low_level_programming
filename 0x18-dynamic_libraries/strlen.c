#include "main.h"
#include <string.h>

/**
 * _strlen - int strlen(const char *str); returns the length of string
 *
 * @s: pointer to the string
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
