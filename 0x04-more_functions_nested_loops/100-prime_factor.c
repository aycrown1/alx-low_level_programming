#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 * Return: Always 0
 */

int main(void)
{
	long long n = 612852475143;
	long long i;

	for (i = 2; i * i <= n; i++)
		while (n % i == 0)
			n /= i;


	if (n > 1)
		printf("%lld\n", n);
	else
		printf("%lld\n", i - 1);

	return (0);
}
