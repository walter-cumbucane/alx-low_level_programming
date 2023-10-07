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
	unsigned int long i;

	if (ht == NULL)
		free(ht);
	else
	{
		node = malloc(sizeof(hash_node_t));
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				if (ht->array[i]->next != NULL)
				{
					node = ht->array[i]->next;
					while (node != NULL)
					{
						free(node->key);
						free(node->value);
						node = node->next;
					}
				}
			}
			free(ht->array[i]);
		}
		free(node);
		free(ht->array);
		free(ht);
	}
}
