#include<stdio.h>

/**
 * swap_int - swaps two integers
 * @a:first value to be swapped
 * @b:seconf value to be swapped
 * Return:nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
