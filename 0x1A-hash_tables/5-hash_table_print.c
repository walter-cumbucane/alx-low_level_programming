#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht : the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	short int comma = 0;

	if (ht == NULL)
		return;
	node = malloc(sizeof(hash_node_t));
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
			if (comma == 0)
				comma = 1;
			if (ht->array[i]->next != NULL)
			{
				node = ht->array[i]->next;
				while (node != NULL)
				{
					printf(", ");
					printf("'%s' : '%s'", node->key, node->value);
					node = node->next;
				}
			}
		}
	}
	printf("}\n");
	free(node);
}
