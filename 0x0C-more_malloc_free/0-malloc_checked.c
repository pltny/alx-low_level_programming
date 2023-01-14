#include "main.h"
/**
 * malloc_checked - array for prints a string
 * @b: number of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
