#include "hash_tables.h"

/**
 * hash_table_delete - A function to delete hash table
 *
 * @ht: pointer to hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			temp = node->next;
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
