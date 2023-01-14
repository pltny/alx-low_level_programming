#iinclude "main.h"

/**
 * _memset - copies char
 * @s: string char
 * @b: input char
 * @n: .....
 * Return: .....
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);

	if (k == NULL)
		return (NULL);
	_memset(k, 0, (nmemb * size));
	return (k);
}
