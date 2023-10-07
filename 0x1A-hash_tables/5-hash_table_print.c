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
	int x = 0;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (x == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			if (x == 0)
				x = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
