#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in
 *         the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	/* Check if the input string is NULL */
	if (b == NULL)
		return (0);

	/* Iterate through each character in the string */
	while (b[i] != '\0')
	{
		/**
		 * If the current character is '0' or '1',
		 * convert it to an integer and add it to the result
		 */
		if (b[i] == '0' || b[i] == '1')
			num = (num << 1) + (b[i] - '0');
		/**
		 * If the current character is not '0' or '1',
		 * return 0 to indicate an error
		 */
		else
			return (0);
		/* Increment the index to move to the next character in the string */
		i++;
	}
	/* Return the converted number */
	return (num);
}


