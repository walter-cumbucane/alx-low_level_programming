#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht : the hash table
 * @key: the key to be stored
 *
 * Return: 1 on success and 0 on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (strcmp(key, ht->array[i]->key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
