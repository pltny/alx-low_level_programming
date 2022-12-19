#include<stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @str:the string whose length is to be found
 * Return: the length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
