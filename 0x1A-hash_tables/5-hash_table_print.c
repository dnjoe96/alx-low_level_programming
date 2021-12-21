#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: Pointer to hash table
 * Return:  void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, size;
	hash_node_t **array;
	hash_node_t *node;
	int count = 0;

	if (ht == NULL)
		return;

	size = ht->size;
	array = ht->array;
	printf("{");
	for (index = 0; index < size; index++)
	{
		node = *(array + index);

		if (node == NULL)
		{
			continue;
		}

		while (node != NULL)
		{
			if (count != 0)
				printf(", ");

			if (node->value)
			{
				printf("'%s': '%s'", node->key, node->value);
			}
			node = node->next;
			count++;
		}

	}

	printf("}\n");
}
