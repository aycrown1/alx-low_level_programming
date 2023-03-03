#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @str: string to be encoded
 *
 * Return: the replaced string
 *
 */


char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_repl = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			/* If the char matches a leet char, replace it */
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_repl[j];
				break;
			}
		}
	}

	return (str);
}
