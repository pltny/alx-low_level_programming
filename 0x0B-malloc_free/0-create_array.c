#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: char to be filed
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *r;

	if (size == 0)
		return (NULL);
	r = malloc(size * sizeof(char));

	if  (r == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		r[j] = c;
	}
	return (r);
}
