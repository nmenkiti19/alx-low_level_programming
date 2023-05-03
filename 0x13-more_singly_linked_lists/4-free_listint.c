#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the head of the linkedlist
 */
void free_listint(listint_t *head)
{
	listint_t *linkl = head;

	while (head)
	{
		linkl = linkl->next;
		free(head);
		head = linkl;
	}
}
