#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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
	printer printers[] = {
		{"c", print_char};
		{"i", print_int};
		{"f", print_float}
		{"s", print_string};
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *printers[j].type)
			{
				printers[j].func(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

