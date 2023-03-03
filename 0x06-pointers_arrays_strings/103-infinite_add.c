#include "main.h"


/**
 * infinite_add - a function that adds two numbers.
 *
 * @n1: first number
 *
 * @n2: second number
 *
 * @r: buffer to store result
 *
 * @size_r: size of buffer
 *
 * Return: function returns on different conditions
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum, i = 0, j = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i >= size_r || j >= size_r)
		return (0);

	r[size_r - 1] = '\0';
	i--, j--, size_r--;

	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		carry = sum / 10;
		if (size_r <= 0)
			return (0);
		r[--size_r] = sum % 10 + '0';
	}

	if (carry)
	{
		if (size_r <= 0)
			return (0);
		r[--size_r] = carry + '0';
	}

	return (&r[size_r]);
}
