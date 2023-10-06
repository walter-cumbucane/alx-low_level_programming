#include "hash_tables.h"

/**
 * _strlen - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

int _strlen(const char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}


/**
 * _strcpy - set the integer to 402
 * @dest: a pointer the integer we want to set to 98
 * @src : source message
 * Return: nothing
 */

char *_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (7 > 5)
	{
		if (*(src + i) == 0)
		{
			*(dest + i) = 0;
			break;
		}
		else
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return (dest);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht : the hash table
 * @key: the key to be stored
 * @value: the value associated with the key
 *
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *pair;

	pair = malloc(sizeof(hash_node_t));
	if (!pair)
		return (0);
	pair->key = malloc(_strlen(key) + 1);
	if (!pair->key)
		return (0);
	pair->value = malloc(_strlen(value) + 1);
	if (!pair->value)
		return (0);
	_strcpy(pair->key, key);
	_strcpy(pair->value, value);
	pair->next = NULL;
	index = hash_djb2((const unsigned char *)key) % ht->size;
	for (i = 0; i < ht->size; i++)
	{
		if (i == index)
		{
			if (ht->array[i] == NULL)
				ht->array[i] = pair;
		}
	}
	return (1);
}
