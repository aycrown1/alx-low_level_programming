#include "3-calc.h"

/**
 * main - Entry point for the program.
 *
 * @argc: the number of arguments passed to the program.
 *
 * @argv: an array of pointers to characters
 *  that contains the arguments passed to the program.
 *
 * Return: 0 in success.
 */

int main(int argc, char *argv[])
{
/*declaring all variables including function pointer*/
	int num1, num2, result;
	int (*ptr)(int, int);

/*Checks the number of arguments*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	};

/*Converts the input strings to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

/*Determine the operator and perform the corresponding operation*/
	ptr = get_op_func(argv[2]);

		if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr(num1, num2);

	/*Print the result*/
	printf("%d\n", result);

	return (0);
}

