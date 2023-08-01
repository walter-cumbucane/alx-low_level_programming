#include "lists.h"


/**
 * insert_nodeint_at_index - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 * @idx: the desired index
 * @n : the number to be inserted
 *
 * Return: the number of nodes of a singly linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *previous, *new;

	if (head == NULL || *head == NULL)
		return (NULL);
	current = *head;
	while (current != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->next = current;
			if (i == 0)
				*head = new;
			else
				previous->next = new;
			new->n = n;
		}
		previous = current;
		current = current->next;
		i++;
	}
	if (idx == i)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->next = NULL;
		new->n = n;
		previous->next = new;
		return (new);
	}
	return (NULL);
}
