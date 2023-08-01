#include "lists.h"

/**
 * free_list - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	if (head == NULL)
		return;
	current = head;
	while ((*current).next != NULL)
	{
		next = (*current).next;
		free((*current).str);
		free(current);
		current = next;
	}
	free((*current).str);
	free(current);
}

