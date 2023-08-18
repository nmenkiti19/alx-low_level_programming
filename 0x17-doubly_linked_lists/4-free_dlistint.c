#include "lists.h"

/**
 * free_dlistint - Frees a doubly linkedlist
 * @head: head of doubly linkedlist
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
		free_dlistint(head->next);
	free(head);
}
