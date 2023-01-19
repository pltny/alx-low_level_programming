
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to the function to be used
 *
 * Return: .....
 * return -1, if size <=0, return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (m = 0; m < size; m++)
			if (cmp(array[m]))
				return (m);
	}
	return (-1);
}
