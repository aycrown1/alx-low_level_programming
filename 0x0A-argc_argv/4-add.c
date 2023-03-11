#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: the number of arguments passed to the program
 *
 * @argv: array of string containing arguments passed to the program
 *
 * Return: returns 0 (success), 1 (error)
 *
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int j = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

