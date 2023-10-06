#include "hash_tables.h"


unsigned long int count_pairs(const hash_table_t *ht)
{
	unsigned long int num_pairs = 0;

	for 


/**
 * hash_table_print - prints a hash table
 * @ht : the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{	
	unsigned long int i, flag = 0, num_pairs;
	hash_node_t *node;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		num_pairs = count_pairs(ht);
		node = malloc(sizeof(hash_node_t));
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (count == 0)
				{
					printf("{");
					count++;
				}
				printf("'%s' : '%s', ", ht->array[i]->key, ht->array[i]->value);
				if (ht->array[i]->next != NULL)
				{
					node = ht->array[i]->next;
					while (node != NULL)
					{
						printf("'%s' : '%s', ", ht->array[i]->key, ht->array[i]->value);
						node = node->next;
					}
				}
			}
			if (i == ht->size - 1)
				printf("}\n");
		}
	}
}
