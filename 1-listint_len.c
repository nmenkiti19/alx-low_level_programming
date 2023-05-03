#include "lists.h"

/**
 * listint_len - returns number of elements in linkedlist
 * @h: head of linkedlist
 *
 * Return: number of elements in linkedlist
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
