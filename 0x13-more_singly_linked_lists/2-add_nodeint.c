#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds new node to the beginning of a list
 * @head: Pointer to list_t struct
 * @n: Integer data to add to new node
 * Return: Address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new;
	return (*head);
}
