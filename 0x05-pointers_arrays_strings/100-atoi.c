#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: the equation to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int d = 0;
	unsigned int f = 0;
	int g = 1;
	int h = 0;

	while (s[d])
	{
	if (s[d] == 45)
	{
	g *= -1;
	}
	while (s[d] >= 48 && s[d] <= 57)
	{
	h = 1;
	f = (f * 10) + (s[d] - '0');
	d++;
	}
	if (h == 1)
	{
	break;
	}
	d++;
	f *= g;
	return (f);
}
