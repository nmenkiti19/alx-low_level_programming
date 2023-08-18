#include "lists.h"

/**
 * add_dnodeint - adds new node to the beginning of doubly linkedlist
 * @head: head of doubly linkedlist
 * @n: integer to be added
 * Return: address of new node
 * else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
