#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: Pointer to hash table
 * Return:  void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, size = ht->size;
	hash_node_t **array = ht->array;
	hash_node_t *node;
	int count = 0;

	printf("{");
	for (index = 0; index < size; index++)
	{
		/*printf("index = %lu, size = %lu\n", index, size);*/
		node = *(array + index);
		/*printf("inside for loop\n");*/
		if (node == NULL)
		{
			/*printf("To continue\n");*/
			continue;
		}

		if (count != 0)
			printf(", ");
		/*printf("address = %p", (void *)node);*/

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}

		/*printf("'%s': '%s'", "key", "value");*/

		count++;
	}

	printf("}\n");
}
