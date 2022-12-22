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
	int l, m;

	l = 0;
	m = 0;

	while (dest[l] != '\0')
		l++;

	while (src[m] != '\0')
	{

		dest[l] = src[m];
		m++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
