#include "main.h"

/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: main string
 *
 * @needle: the substring
 *
 * Return: returns a pointer to the start of the occurence or NULL
 *
 */


char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *pattern = needle;

		while (*pattern != '\0' && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (*pattern == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (NULL);
}
