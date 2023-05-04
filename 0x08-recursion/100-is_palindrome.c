#include <string.h>
#include "main.h"

/**
 * _recursion - takes a pointer to a null-terminated string,
 *		a starting index, and an ending index
 * @s: the input string
 * @start: a starting index that delimit a substring of the input string s.
 * @end: an ending index that delimit a substring of the input string s.
 * Return: returns 1 if the substring is a palindrome, and 0 if it is not.
 */
int _recursion(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_recursion(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_recursion(s, 0, len - 1));
}


