#include "main.h"

/**
 * _puts - outputs a string
 * @str: the string tbe printed
 * Return:void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{

	_putchar(*str);
	}
	_putchar('\n');
}
