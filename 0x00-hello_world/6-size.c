#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myc;
	int myint;
	long int myli;
	long long int l;
	float myfloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(myc));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(myint));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(myli));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(myfloat));

	return (0);
}
