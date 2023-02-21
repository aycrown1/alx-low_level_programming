#include "main.h"

/**
 * _islower - Function checks for lowercase character.
 *
 * @c: parameterto printed
 *
 * Return: 0 if 'c' is not lowercase & 1 if 'c' is lowercase
 */

int _islower(int c)
{

	if (c <= 97 && c >= 122)

	return (1);
	else

	return (0);

}
