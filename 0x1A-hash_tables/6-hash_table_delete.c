#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht : the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *next;
	unsigned int long i;

	if (ht == NULL)
		return;
	else
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
