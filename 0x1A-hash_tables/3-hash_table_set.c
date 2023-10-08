#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add the key-value element
 * @key: key
 * @value: value
 *
 * Return: 1 if success,
 * else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *head = NULL;
	unsigned long int i = 0;

	if (ht == NULL || value == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	head = ht->array[i];
	if (key != NULL)
	{
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
	}
	head = ht->array[i];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (head != NULL)
	{
		new_node->next = head;
		ht->array[i] = new_node;
		return (1);
	}
	ht->array[i] = new_node;
	return (1);
}
