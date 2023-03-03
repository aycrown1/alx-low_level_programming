#include "main.h"
#include <ctype.h>

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @str: string to be worked  on
 *
 * Return: the capitalized string
 *
 */


char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;

	while (str[i] != '\0')
	{
		/* If the char is a separator, set the cap_next flag */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			cap_next = 1;
		}
		/* elseif the cap_next flag is set, capitalize the char */
		else if (cap_next)
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
		i++;
	}

	return (str);
}
