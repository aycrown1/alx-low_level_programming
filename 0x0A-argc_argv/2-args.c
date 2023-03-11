#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: the number of arguments passed to the program
 *
 * @argv: array of string containing arguments passed to the program
 *
 * Return: returns 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

