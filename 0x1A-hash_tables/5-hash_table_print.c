#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 *
 * @ht: hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i = 0;
	int tmp = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			while (head)
			{
				if (tmp == 1)
					printf(", ");
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				tmp = 1;
			}
		}
		i++;
	}
	printf("}\n");
}
