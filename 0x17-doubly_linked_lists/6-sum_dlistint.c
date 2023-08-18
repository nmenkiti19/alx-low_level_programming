#include "lists.h"

/**
 * sum_dlistint - sum all values in a doubly linkedlist
 * @head: head of doubly linkedlist
 *
 * Return: sum of all values, else 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
