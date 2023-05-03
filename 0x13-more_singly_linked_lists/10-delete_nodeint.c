#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linkedlist
 * @head: head of a linkedlist
 * @index: index of the linkedlist
 *
 * Return: 1 if success, -1 if it failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prec, *linkl;
	unsigned int i = 0;

	current = *head;
	prec = current;

	if ((*head) && index == 0)
	{
		*head = (*head)->next;
		free(prec);
		return (1);
	}

	while (current)
	{
		linkl = current;

		if (i == index)
		{
			prec->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		prec = linkl;
		i++;
	}

	return (-1);
}
