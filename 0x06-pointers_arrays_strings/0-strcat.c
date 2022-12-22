#include "main.h"
#include <stdio.h>

/**
 * _strcat - unction that concatenates two strings.
 * @dest: destination string
 * @src: serves as a source spring
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int zlen = 0, n;

	while (dest[zlen])
	{
		zlen++;
	}

	for (n = 0; src[n] != 0; n++)
	{
		dest[zlen] = src[n];
		zlen++;
	}

	dest[zlen] = '\n';
	return (dest);
}
