#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a value
 * @array: A pointer to the first element of the array
 * @left: The starting index of the array to search.
 * @right: The ending index of the array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present return -1
 *
 * Description: Prints the array being searched
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t t;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (t = left; t < right; t++)
		printf("%d, ", array[t]);
	printf("%d\n", array[t]);

	t = left + (right - left) / 2;
	if (array[t] == value && (t == left || array[t - 1] != value))
		return (t);
	if (array[t] >= value)
		return (advanced_binary_recursive(array, left, t, value));
	return (advanced_binary_recursive(array, t + 1, right, value));
}

/**
 * advanced_binary - Searches for a value
 * @array: A pointer to the first element
 * @size: The no of elements
 * @value: The value to search for.
 *
 * Return: If value not present NULL
 *
 * Description: Prints the array
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
