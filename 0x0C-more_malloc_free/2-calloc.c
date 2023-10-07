#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array and initialize to zero
 * @nmemb: Number of elements in the array
 * @size: Size (in bytes) of each element
 *
 * Return: A pointer to the allocated and zero-initialized memory
 *         If nmemb or size is 0, or if malloc fails, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	ptr = malloc(nmemb * size);

	/* Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
