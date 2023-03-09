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
	int len = strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		return (is_palindrome(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}
