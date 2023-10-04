#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 * and initializes it with a specific char.
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
