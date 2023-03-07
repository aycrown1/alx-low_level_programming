#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: string
 *
 * @accept: substring
 *
 * Return: returns a pointer, else NULL
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			};
			ptr++;
		};
		s++;
	};
	return (NULL);
}
