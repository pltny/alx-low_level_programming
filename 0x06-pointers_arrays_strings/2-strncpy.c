#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest:destination string
 * @src:source string
 * @n:no of bytes
 * Return:returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;

	while (src[l] != '\0' && l < n)
	{
		dest[l] = src[l];
		l++;
	}

	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
