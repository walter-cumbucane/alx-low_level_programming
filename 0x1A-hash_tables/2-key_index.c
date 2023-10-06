#include "hash_tables.h"

/**
 * key_index - index at which the pair should be stored in the hash table
 * @key: the key to be stored
 * @size: the size of the hash table
 *
 * Return: a pointer to the newly created hash table or null in failure
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
