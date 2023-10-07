#include "hash_tables.h"


/**
 * count_pairs - prints a hash table
 * @ht : the hash table
 *
 * Return: the number of pairs in the table
 */

unsigned long int count_pairs(const hash_table_t *ht)
{
	unsigned long int i, num_pairs = 0;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			num_pairs++;
			if (ht->array[i]->next != NULL)
			{
				node = ht->array[i]->next;
				while (node != NULL)
				{
					num_pairs++;
					node = node->next;
				}
			}
		}
	}
	free(node);
	return (num_pairs);
}
/**
 * hash_table_print - prints a hash table
 * @ht : the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, num_pairs;
	hash_node_t *node;

	if (ht == NULL)
		return;
	num_pairs = count_pairs(ht);
	node = malloc(sizeof(hash_node_t));
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
			if (num_pairs != 1)
				printf(", ");
			num_pairs--;
			if (ht->array[i]->next != NULL)
			{
				node = ht->array[i]->next;
				while (node != NULL)
				{
					printf("'%s' : '%s'", node->key, node->value);
					if (num_pairs != 1)
						printf(", ");
					num_pairs--;
					node = node->next;
				}
			}
		}
	}
	printf("}\n");
	free(node);
}