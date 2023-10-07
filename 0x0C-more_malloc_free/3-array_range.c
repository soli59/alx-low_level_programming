#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max
 * @min: Minimum value (inclusive)
 * @max: Maximum value (inclusive)
 *
 * Return: A pointer to the newly created array of integers
 *         If min > max or if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* Check if min > max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));

	/* Check if malloc failed */
	if (arr == NULL)
		return (NULL);

	/* Initialize the array with values from min to max */
	for (i = 0; i < size; i++, min++)
		arr[i] = min;

	return (arr);
}
