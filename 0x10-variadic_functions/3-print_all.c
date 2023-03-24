#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - functions handle printing the values of char
 *
 * @args: argument
 */

void print_char(va_list args)
{
	int c = va_arg(args, int);

	printf("%c", c);
}


/**
 * print_int - functions handle printing the values of int
 *
 * @args: argument
 */

void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}


/**
 * print_float - functions handle printing the values of float
 *
 * @args: argument
 */

void print_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - functions handle printing the values of strings
 *
 * @args: argument
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char*);

	if (s != NULL)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
	}
}



/**
 * print_all - function that prints anything.
 *
 * @format:a list of types of arguments passed to the function
 *
 */

/**
 * print_all - function that prints anything.
 *
 * @format:a list of types of arguments passed to the function
 *
 */
void print_all(const char *const format, ...)
{
	va_list args;
	char *fmt = (char *)format;
	int is_arg;

	va_start(args, format);
	is_arg = 1;

	while (*fmt != '\0')
	{
		if (!is_arg)
		{
			printf(", ");
		}

		switch (*fmt)
		{
		case 'c':
			print_char(args);
			break;

		case 'i':
			print_int(args);
			break;

		case 'f':
			print_float(args);
			break;

		case 's':
			print_string(args);
			break;
		default:
			fmt++;
			continue;
		}
		fmt++;
		is_arg = 0;
	}

	va_end(args);
	printf("\n");
}

