#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arry, i = 0, t = min;

	if (min > max)
		return (0);
	arry = malloc((max - min + 1) * sizeof(int));

	if (!arry)
		return (0);
	while (i <= max - min)
		arry[i++] = t++;
	return (arry);
}
