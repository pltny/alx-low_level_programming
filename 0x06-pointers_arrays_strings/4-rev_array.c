#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 *@a: array that is to bereversed
 *@n:total no of elements in array
 */
void reverse_array(int *a, int n)
{
	int l, m, tmp;

	m = n - 1;

	for (l = 0; l < n / 2; l++)
	{
		tmp = a[l];
		a[l] = a[m];
		a[m--] = tmp;
	}
}
