#include "hash_tables.h"

/**
 * insert - A function to insert value at a hash table index
 *
 * @array: Pointer to hash table array
 * @index: Index to be inserted
 * @node: The pointer to node to be inserted
 * Return: 1
 */
int insert(hash_node_t **array, unsigned long index, hash_node_t *node)
{
	hash_node_t *head;

	if (array[index] == NULL)
	{
		array[index] = node;
		return (1);
	}
	else
	{
		head = array[index];

		if (head->next == NULL)
		{
			if (strcmp(head->key, node->key) == 0)
			{
				head->value = node->value;
				free(node);
				return (1);
			}

			head->next = node;
			return (1);
		}

		while (head->next != NULL)
		{
			if (strcmp(head->key, node->key) == 0)
			{
				head->value = node->value;
				free(node);
				return (1);
			}

			head = head->next;
		}

		head->next = node;

		return (1);
	}
}

/**
 * hash_table_set - add an element to the hash table
 *
 * @ht: hash table to add or update
 * @key: The key
 * @value: The value
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned long int size = ht->size;
	hash_node_t **array = ht->array;

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;

	index = key_index((const unsigned char *)key, size);

	insert(array, index, node);

	return (1);
}
