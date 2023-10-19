#include "main.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	if (!h)
		return (0);

	while (current)
	{
		if (current->str == NULL)
			printf("[%lu] (nil)\n", nodes);
		else
			printf("[%lu] %s\n", nodes, current->str);
		current = current->next;
		nodes++;
	}

	return (nodes);
}
