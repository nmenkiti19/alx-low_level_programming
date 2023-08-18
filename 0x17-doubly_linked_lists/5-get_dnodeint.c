#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a doubly linkedlist
 * @head: head of doubly linkedlist
 * @index: position of the node
 *
 * Return: nth node of a dlistint_t, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
