#include "hash_tables.h"

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

		if (node->key || node->value)
			printf("'%s': '%s'", node->key, node->value);

		/*printf("'%s': '%s'", "key", "value");*/
		
		count++;
	}

	printf("}\n");
}
