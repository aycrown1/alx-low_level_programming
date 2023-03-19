#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: second string
 * @n: the number of bytes to copy from s2.
 *
 * Return:  a pointer to a new string which contains
 * s1 followed by the first n bytes of s2,
 * and is null terminated.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int copy_len;

	s1_len = (s1 != NULL) ? strlen(s1) : 0;
	s2_len = (s2 != NULL) ? strlen(s2) : 0;
	copy_len = (n >= s2_len) ? s2_len : n;

	result = (char *)malloc(sizeof(char) * (s1_len + copy_len + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		memcpy(result, s1, s1_len);
	}
	if (s2 != NULL && n > 0)
	{
		memcpy(result + s1_len, s2, copy_len);
	}

	result[s1_len + copy_len] = '\0';
	return (result);
}

