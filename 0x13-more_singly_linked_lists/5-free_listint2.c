#include "lists.h"

/**
 * free_listint2 - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	current = *head;
	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
	*head = NULL;
}
