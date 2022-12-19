#include "main.h"
#include<stdio.h>

/**
 *print_array - prints elements of an array
 *@a: array of integers
 *@n: no of elements ofthe array to be printed
 *Return:void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
	printf("%d", a[m]);
	if (m != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
