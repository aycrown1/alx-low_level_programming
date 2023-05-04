#include "main.h"
#include <string.h>
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, otherwise return 0
 */

int is_palindrome(char *s)
{
	int i;
	int len = strlen(s);
	
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
		{
			return (0);
		}
	}
	return (1);
}

