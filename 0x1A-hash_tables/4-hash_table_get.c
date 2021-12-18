#include "hash_tables.h"

/**
 * find - A function to find a key in a hash table and return node
 *
 * @array: Pointer to hash table array
 * @index: Index to be inserted
 * @key: key
 *
 * Return: node
 */
hash_node_t *find(hash_node_t **array, unsigned long index, const char *key)
{
	if (array[index] == NULL)
	{
		return (NULL);
	}
	else
	{
		hash_node_t *head;

		head = array[index];

		while (head != NULL)
		{
			if (head->key == key)
				return (head);

			head = head->next;
		}

		return (NULL);
	}
}

/**
 * hash_table_get - get an element in the hash table
 *
 * @ht: hash table to add or update
 * @key: The key
 * Return: value if successful, NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned long int size = ht->size;
	hash_node_t **array = ht->array;

	index = key_index((const unsigned char *)key, size);

	node = find(array, index, key);

	if (node == NULL)
		return (NULL);

	return (node->value);
}
