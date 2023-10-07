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
	write(1,"{", 1);
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (x == 1)
				write(1, ", ", 2);
			printf("'%s' : '%s'", node->key, node->value);
			if (x == 0)
				x = 1;
			node = node->next;
		}
	}
	write(1, "}\n", 2);
}
