#include "main.h"

/**
 * print_alphabet_x10 -  Prints the alphabet ten times
 * All in lowercase, followed by a new line.
 *
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

for (i = 0; i < 10; i++)
{
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
};
}
