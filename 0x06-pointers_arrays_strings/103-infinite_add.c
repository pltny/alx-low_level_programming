#include "main.h"

/**
 * rev_string - declares a reverse arrays
 * @n: integer
 * Return:Always 0
 */
void rev_string(char *n)
{
	int l = 0;
	int m = 0;
	char temp;

	while (*(n + l) != '\0')
	{
		l++;
	}
	l--;

	for (m = 0; m < l; m++, l--)
	{
		temp = *(n + m);
		*(n + m) = *(n + l);
		*(n + l) = temp;
	}
}
/**
 * infinite_add  - function addds two numbers
 * @n1:first number
 * n2:second number
 * @r:pointer
 * @size_r:buffer size
 * Return :value to the calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int off = 0, l = 0, m = 0, no = 0;
	int no1 = 0, no2 = 0, tmp = 0;

	while (*(n1 + l) != '\0')
		l++;
	while (*(n2 + m) != '\0')
		m++;
	l--;
	m--;
	if (m >= size_r || l >= size_r)
		return (0);
	while (m >= 0 || l >= 0 || off == 1)
	{
		if (l < 0)
			no1 = 0;
		else
no1 = *(n1 + l) - '0';
		if (m < 0)
			no2 = 0;
		else
			no2 = *(n2 + m) - '0';
		tmp = no1 + no2 + off;
		if (tmp >= 10)
			off = 1;
		else
			off = 0;
		if (no >= (size_r - 1))
			return (0);
		*(r + no) = (tmp % 10) + '0';
		no++;
		l--;
		m--;
	}
	if (no == size_r)
		return (0);
	*(r + no) = '\0';
	rev_string(r);
	return (r);
}
