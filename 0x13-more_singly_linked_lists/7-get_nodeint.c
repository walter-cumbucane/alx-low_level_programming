#include "lists.h"

/**
 * get_nodeint_at_index - prints all the nodes of a singly linked list
 * @head: a pointer to the first node of a singly linked list
 * @index: the desired index
 *
 * Return: the number of nodes of a singly linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	i = 0;
	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = (*current).next;
		i++;
	}
	return (NULL);
}
