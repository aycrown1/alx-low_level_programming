#include "main.h"
/**
 * print_last_digit - function prints the last digit of a mumber
 * @n: the number
 *
 * Return: returns the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
