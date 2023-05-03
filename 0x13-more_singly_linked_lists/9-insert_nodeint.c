#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node
 * at given index
 * @head: head of a linkedlist
 * @idx: index of the linkedlist
 * @n: integer element for new node
 *
 * Return: Address of new node, or NULL if it
 * fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *prec, *linkl;
	unsigned int i = 0;

	if (!(*head) && idx != 0)
		return (NULL);

	current = *head;
	prec = current;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	while (current)
	{
		linkl = current;

		if (i == idx)
		{
			new_node->next = current;
			prec->next = new_node;
			return (new_node);
		}
		current = current->next;
		prec = linkl;
		i++;
	}

	return (NULL);
}
