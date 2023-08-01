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
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* task 0 function declaration */
size_t print_listint(const listint_t *h);

/* task 1 function declaration */
size_t listint_len(const listint_t *h);

/* task 2 function declaration */
listint_t *add_nodeint(listint_t **head, const int n);

/* task 3 function declaration */
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif
