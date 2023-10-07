#ifndef HASH_H
#define HASH_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;


/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Task 0 function. Creates the hash table */
hash_table_t *hash_table_create(unsigned long int size);

/* Task 1 function. Implements a hash function */
unsigned long int hash_djb2(const unsigned char *str);

/* Task 2 function. */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* Task 3 function */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* Task 4 function */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* Task 5 function */
void hash_table_print(const hash_table_t *ht);
unsigned long int count_pairs(const hash_table_t *ht);

/* Task 6 function */
void hash_table_delete(hash_table_t *ht);

/* String Handling function */
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);

#endif
