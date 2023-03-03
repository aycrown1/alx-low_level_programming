#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: string in lowercase
 *
 * Return: string in uppercase
 *
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		/*If the character is lowercase, convert it to uppercase*/

		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}

	return (s);
}
