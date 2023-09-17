#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Task 0 function declaration */
size_t print_dlistint(const dlistint_t *h);

/* Task 1 function declaration */
size_t dlistint_len(const dlistint_t *h);

/* Task 2 function declaration */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Task 3 funtion declaration */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* Task 4 function declaration */
void free_dlistint(dlistint_t *head);

/* Task 5 function declaration */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* Task 6 function declaration */
int sum_dlistint(dlistint_t *head);

/* Task 7 function declaration */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* Task 8 function declaration */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
