#include "main.h"

/**
 * _isalpha - function that check for alphabetic characters
 *
 * @c: prameter for any alphabet
 *
 * Return:1 if character is an alphabet and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) ||
	(c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
