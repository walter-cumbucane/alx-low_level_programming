#include "lists.h"

/**
 * delete_nodeint_at_index - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 * @index: the desired index
 *
 * Return: the number of nodes of a singly linked list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *previous, *next;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	while (current->next != NULL)
	{
		if (i == index)
		{
			next = current->next;
			free(current);
			if (i != 0)
				previous->next = next;
			else
				*head = next;
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	if (i == index)
	{
		if (i == 0)
		{
			free(current);
			*head = NULL;
			return (1);
		}
		previous->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
