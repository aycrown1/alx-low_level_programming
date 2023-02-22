#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);

	if (count < 97)
	{
		printf(", ");
	}
	else
	{
		printf("\n");
	}
	count++;
	}
	return (0);
}

