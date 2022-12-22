#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest:destination spring
 * @src: source string
 * @n: no of bytes to be concatenated
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	l = 0;
	m = 0;

	while (dest[l] !=  '\0')
		l++;

	while (src[m] != '\0' && m < n)
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	dest[l] = '\0';
	return (dest);
}
