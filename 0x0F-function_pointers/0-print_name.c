#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input name
 * @f: function pointer
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
