#include "hash_tables.h"

/**
 * key_index - Get and returns the key index for the hash table
 *
 * @key: The key
 * @size: The size of the array table
 * Return: The Index, btw 0 to size_of_array - 1
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
