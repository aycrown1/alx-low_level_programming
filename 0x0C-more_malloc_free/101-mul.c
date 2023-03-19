#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is composed only of digits
 * @str: the string to check
 * Return: 1 if the string is composed only of digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);

	return (1);
}

/**
 * _strlen - computes the length of a string
 * @str: the string to process
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 * Return: the result of the multiplication as a string
 */

char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result;
	int i, j, carry, n, val;
	char *str;

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n = (num1[i] - '0') * (num2[j] - '0');
			val = result[i + j + 1] + n + carry;
			result[i + j + 1] = val % 10;
			carry = val / 10;
		}
		result[i + j + 1] += carry;
	}

	for (i = 0; i < len1 + len2; i++)
	{
		if (result[i])
			break;
	}

	if (i == len1 + len2)
		return ("0");

	n = len1 + len2 - i + 1;
	str = malloc(n * sizeof(char));
	if (!str)
	{
		free(result);
		return (NULL);
	}

	for (j = 0; i < len1 + len2; i++, j++)
		str[j] = result[i] + '0';

	str[j] = '\0';
	free(result);
	return (str);
}


/**
 * main - entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	if (!result)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}

