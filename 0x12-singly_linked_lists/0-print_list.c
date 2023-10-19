#include "lists.h"

/**
 * print_list - prints all the element of a list_t list
 * @head: the head node
 *
 * Return: the number of nodes present
 */
size_t print_list(const list_t *head)
{
	size_t node_count = 0;
	list_t *tmp_head = (list_t *) head;

	if (tmp_head == NULL)
	{
		return (0);
	}

	while (tmp_head != NULL)
	{
		if (tmp_head->str == NULL)
		{
			tmp_head->str = "(nil)";
			tmp_head->len = 0;
		}

		printf("[%u] %s\n", tmp_head->len, tmp_head->str);
		node_count++;
		tmp_head = tmp_head->next;
	}

	return (node_count);
}
