#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: string to be printed
 * @n: number of strings passed to the function
 * Description: if separator is NULL, it is not printed.
 *               if one of the string is NULL, (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int intex;

	va_start(string, n);

	for (intex = 0; intex < n; intex++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (intex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
