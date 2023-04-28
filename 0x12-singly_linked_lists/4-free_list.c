#include "lists.h"

/**
 * free_list - Frees element in a linkedlist.
 * @head: head of the list
 * Return
 */
void free_list(list_t *head)
{
	list_t *ftemp;

	while (head)
	{
		ftemp = head;
		free(head->str);
		free(head);
		head = ftemp->next;
	}
}
