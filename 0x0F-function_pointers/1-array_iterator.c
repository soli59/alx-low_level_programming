#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: A pointer to the function to be executed
 *
 * Description: function executes provided function on each element of array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
