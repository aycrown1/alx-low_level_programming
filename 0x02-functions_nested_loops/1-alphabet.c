#include "main.h"

/**
 * print_alphabet -  Prints the alphabet
 * All in lowercase, followed by a new line.
 *
 * Return: always 0.
 */

void print_alphabet(void)
{
	char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
_putchar(alphabet);
};
	 _putchar('\n');
}
