#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}
	return (sign * result);
}

