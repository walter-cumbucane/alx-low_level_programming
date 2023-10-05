#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: a pointer to the newly created hash table or null in failure
 */



hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * table->size);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
