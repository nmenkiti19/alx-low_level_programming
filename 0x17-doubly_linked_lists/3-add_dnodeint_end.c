#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a foubly linkedlist
 * @head: head of doubly linkedlist
 * @n: integer to insert
 *
 * Return: The address of the new element, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	tmp_node = *head;
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	tmp_node->next = new_node;
	new_node->prev = tmp_node;

	return (new_node);
}
