#include "lists.h"
#include<string.h>

/**
 * add_node - Adds a node to the head of a linkedlist
 * @head: head of the list
 * @str: string pointer.
 *
 * Return: pointer of the new head on if success, else NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	int i = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	temp->str = strdup(str) ? strdup(str) : (NULL);
	temp->len = i;
	temp->next = *head;

	*head = temp;

	return (temp);
}
