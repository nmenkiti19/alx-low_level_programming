#include "lists.h"

/**
 * pop_listint - Deletes head node of a linked list
 * @head: A pointer to head of linked list
 * Return: If linked list is empty - 0 
 * 	Else - data of head node (node_del)
 */
int pop_listint(listint_t **head)
{
	listint_t *linkl;
	int node_del;

	if (*head == NULL)
		return (0);

	node_del = (*head)->n;
	linkl = (*head)->next;
	free(*head);
	*head = linkl;
	return (node_del);
}
