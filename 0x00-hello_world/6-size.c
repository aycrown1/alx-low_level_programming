#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mychar;
	int myint;
	long int myli;
	long long int mylli;
	float myfloat;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(mychar));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(myint));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(myli));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(mylli));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(myfloat));

	return (0);
}
