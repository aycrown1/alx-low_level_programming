#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print out each opcode in hexadecimal format
 * @start: start of hex
 * @n_bytes: number of bytes
 */

void print_opcodes(char *start, int n_bytes)
{
	int i;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02hhx ", start[i] & 0xff);
	}
	printf("\n");
}
/**
 * main - entry point
 * @argc: number of parameters
 *
 * @argv: array of parameters
 * Return: 0 in success otherwise Error
 */

int main(int argc, char **argv)
{
	int n_bytes;
	char *start;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	start = (char *)main;
	print_opcodes(start, n_bytes);

	return (0);
}
