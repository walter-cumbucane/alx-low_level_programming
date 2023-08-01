#include "lists.h"

/**
 * pop_listint - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (*head == NULL || head == NULL)
		return (0);
	current = *head;
	*head = current->next;
	n = current->n;
	free(current);
	return (n);
}
