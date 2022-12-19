#include "main.h"

/**
 * rev_string - reverses a string.
 * @s:the string to be reversed
 * Return:nothing
 */
void rev_string(char *s)
{
	int len = 0, indexx = 0;
	char tmp;

	while (s[indexx++])
	len++;

	for (indexx = len - 1; indexx >= len / 2; indexx--)
	{
	tmp = s[indexx];
	s[indexx] = s[len - indexx - 1];
	s[len - indexx - 1] = tmp;
	}
}
