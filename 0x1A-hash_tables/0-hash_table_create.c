#include "hash_tables.h"

/**
 * hash_table_create - A function that creates hash table
 *
 * @size: size of the function
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **myarray;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	myarray = malloc(sizeof(hash_node_t *) * size);

	if (myarray == NULL)
		return (NULL);

	table->size = size;
	table->array = myarray;

	for (i = 0; i < size; i++)
		myarray[i] = NULL;

	return (table);
}
