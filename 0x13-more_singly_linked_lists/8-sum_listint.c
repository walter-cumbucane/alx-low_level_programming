#include "lists.h"

/**
 * sum_listint - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
		return (0);
	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
