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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(mychar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(myint));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(myli));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(mylli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(myfloat));

	return (0);
}
