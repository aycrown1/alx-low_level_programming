#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: the number of arguments passed to the program
 *
 * @av: an array of strings containing the arguments.
 *
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, index, total_len;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	result = malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (j = 0; j < ac; j++)
	{
		strcpy(result + index, av[j]);
		index += strlen(av[j]);
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}

