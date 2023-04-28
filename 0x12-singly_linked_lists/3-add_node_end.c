#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node to the end of list
 * @head: head of the list
 * @str: string to add as node
 * Return: returns address of new element if success, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *elem, *temp;
	size_t length = 0;

	elem = malloc(sizeof(list_t));
	if (elem == NULL)
		return (NULL);

	while (str[length])
		length++;

	elem->len = length;
	elem->str = strdup(str);
	if (*head == NULL)
	{
		elem->next = *head;
		*head = elem;
	}
	else
	{
		elem->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = elem;
	}
	return (elem);
}
