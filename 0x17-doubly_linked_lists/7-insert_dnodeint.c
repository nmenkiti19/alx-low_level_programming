#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node in doubly linkedlist
 * @h: head of doubly linkedlist
 * @idx: position to insert node
 * @n: result of new node
 *
 * Return: address of new node, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t_node = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t_node = t_node->next;
		if (t_node == NULL)
			return (NULL);
	}

	if (t_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = t_node;
	new_node->next = t_node->next;
	t_node->next->prev = new_node;
	t_node->next = new_node;

	return (new_node);
}
