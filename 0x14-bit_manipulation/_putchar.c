#include "main.h"

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: the character to write to stdout
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

