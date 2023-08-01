#include "lists.h"

/**
 * free_listint - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	if (current == NULL)
		return;
	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}
