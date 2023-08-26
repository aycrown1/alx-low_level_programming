#include "main.h"

/**
 *_isupper - function that check for uppercase
 *
 *@c: an input character to be checked
 *
 * Return: 1 if the paramwter is uppercase
 *	0 if otherwise
 *
 */

int _isupper(int c)
{
	if (!(c >= 65 && c <= 90))
		return (0);
	else
		return (1);
}
