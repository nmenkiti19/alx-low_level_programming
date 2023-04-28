#include "lists.h"

/**
 * list_len - gets number of nodes in a list
 * @h: head of linkedlist
 * Return: returns number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t position = 0;

	while (h)
	{
		h = h->next;
		position++;
	}

	return (position);
}
