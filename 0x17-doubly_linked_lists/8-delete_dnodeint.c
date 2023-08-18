#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a doubly linkedlist
 * @head: head of the doubly linkedlist
 * @index: position of the node to delete
 *
 * Return: 1 if successful, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t_node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (t_node == NULL)
			return (-1);
		t_node = t_node->next;
	}

	if (t_node == *head)
	{
		*head = t_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		t_node->prev->next = t_node->next;
		if (t_node->next != NULL)
			t_node->next->prev = t_node->prev;
	}

	free(t_node);
	return (1);
}
