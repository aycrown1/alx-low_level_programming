#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer variable
 *
 */

void rev_string(char *s)
{
	int i = 0;

	int j = strlen(s) - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
