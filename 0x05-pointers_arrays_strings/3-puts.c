#include "main.h"
#include <unistd.h>

/**
 * _puts - int puts(const char *str); prints a string to the stdout
 *
 * @str: string to be outputed to stdout
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
