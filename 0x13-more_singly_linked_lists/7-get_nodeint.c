#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linkedlist
 * @head: head of linked list
 * @index: index of the node
 *
 * Return: nth node. If no node, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
			return (head);
		counter++, head = head->next;
	}

	return (NULL);
}
