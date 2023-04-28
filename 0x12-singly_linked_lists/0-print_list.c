#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a linked list
 * @h: head of list
 *
 * Return: returns number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t position = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		position++;
	}
	return (position);
}
