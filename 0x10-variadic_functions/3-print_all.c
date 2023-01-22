#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @arg: a list of arguments pointing to the character
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an int
 * @arg: A list of arguments pointing to the integer
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}
/**
 * print_float - prints a float
 * @arg: a list arguments pointing to a float
 */

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}
/**
 * print_string - prints string
 * @arg: a list of arguments pointing to string
 */

void print_string(va_list arg)
{
	char *sty;

	sty = va_arg(arg, char *);

	if (sty == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", sty);
}

/**
 * print_all - prints anything followed by new line
 * @format: a string of character representing the arguments
 * Description: any charcter is ignored if string is NULL,(nil) is printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
