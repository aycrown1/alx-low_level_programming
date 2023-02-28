#include "main.h"
#include <unistd.h>

/**
 * print_rev - a function that print a string in reverse
 *
 * @s: length of string
 *
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (length > 0)
	{
		write(1, s, 1);
		s--;
		length--;
	}
	write(1, "\n", 1);
}
