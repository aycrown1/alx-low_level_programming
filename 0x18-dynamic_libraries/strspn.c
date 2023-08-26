#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the string
 *
 * @accept: substring
 *
 * Return: the number of bytes
 *
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
