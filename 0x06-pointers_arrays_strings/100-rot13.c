#include "main.h"


/**
 * rot13 - a function that rotate by 13 places
 *
 * @str: a string to be encoded
 *
 * Return: returns the coded string
 *
 */

char *rot13(char *str)
{
	int i, j;

	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/*@alphabet: first 13 alphabets*/

	char *rot13_alphabet = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* @rot13_alphabet: rot13 of the first alphabets */

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
/* If the current char matches a char in the alphabet*/

 /* Replace it with the corresponding rot13 char*/
			if (str[i] == alphabet[j])
			{
				str[i] = rot13_alphabet[j];
				break;
			}
		}
	}

	return (str);
}

