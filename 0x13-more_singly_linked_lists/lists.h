#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/* _putchar function declaration */
int _putchar(char c);

/**
  * struct listint_s - singly linked list
  * @n : data
  * @next : points to the next node
  *
  *Description: singly linked list node structure
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

/* task 4 function declaration */
void free_listint(listint_t *head);

/* task 5 function declaration */
void free_listint2(listint_t **head);

/* task 6 function declaration */
int pop_listint(listint_t **head);

/* task 7 function declaration */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* task 8 function declaration */
int sum_listint(listint_t *head);

/* task 9 function declaration */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* task 10 function declaration */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
