#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @r:string to be modified
 *
 * Return: the resulting spring
 */
char *cap_string(char *r)
{
	int i, j;

	char ter[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; r[i] != '\0'; i++)
	{
		if (i == 0 && r[i] >= 'a' && r[i] <= 'z')
			r[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (r[i] == ter[j])
			{
				if (r[i + 1] >= 'a' && r[i + 1] <= 'z')
				{
					r[i + 1] -= 32;
				}
			}
		}
	}
	return (r);
}
