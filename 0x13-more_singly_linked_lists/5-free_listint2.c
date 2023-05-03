#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 *        and sets its head to NULL
 * @head: Pointer to the address of the
 *        head of the linkedlist
 */
void free_listint2(listint_t **head)
{
	listint_t *linkl;

	if (head == NULL)
		return;

	while (*head)
	{
		linkl = (*head)->next;
		free(*head);
		*head = linkl;
	}

	*head = NULL;
}
