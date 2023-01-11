#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicating a string
 * @str: string
 *
 * Return: The duplicated string
 */
char *_strdup(char *str)
{
	int b = 0, j = 1;
	char *r;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	r = malloc((sizeof(char) * j) + 1);

	if (r == NULL)
		return (NULL);

	while (b < j)
	{
		r[b] = str[b];
		b++;
	}

	r[b] = '\0';
	return (r);
}
