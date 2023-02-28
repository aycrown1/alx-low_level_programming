#include "main.h"

/**
 * puts2 - a function that prints 0 and other characters (even)
 *
 * @str: array of string
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

