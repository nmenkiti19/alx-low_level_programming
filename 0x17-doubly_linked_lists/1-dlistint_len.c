#include "lists.h"

/**
 * dlistint_len - get number of elements in a doubly linkedlist
 * @h: head of doubly linkedlist
 * Return: number of nodes
 * else NULL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
