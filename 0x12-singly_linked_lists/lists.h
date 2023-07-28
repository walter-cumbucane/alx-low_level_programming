#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/* _putchar function declaration */
int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* task 0 function declaration */
size_t print_list(const list_t *h);

/*task 1 function declaration */
size_t list_len(const list_t *h);

/* task 2 function declaration */
list_t *add_node(list_t **head, const char *str);

#endif
