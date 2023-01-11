#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to be concatenated
 * @s2:the second string  to be concatenated
 *
 * Return: the two strings
 */
char *str_concat(char *s1, char *s2)
{
	int j = 0, k = 0, l = 0, m = 0;
	char *r;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[j])
		j++;

	while (s2[k])
		k++;

	m = j + k;
	r = malloc((sizeof(char) * m) + 1);

	if (r == NULL)
		return (NULL);

	k = 0;
	while (l < m)
	{
		if (l < m)
			r[l] = s1[l];
		if (l >= j)
		{
			r[l] = s2[k];
			k++;
		}
		l++;
	}

	r[l] = '\0';
	return (r);
}
