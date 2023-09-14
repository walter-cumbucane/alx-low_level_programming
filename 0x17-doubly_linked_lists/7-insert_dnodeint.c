#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at the given index
 * @h: a pointer to the first node of a double linked list
 * @idx: the desired index
 * @n : the number to be inserted
 *
 * Return: the newly inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int now = 0;
	dlistint_t *find_the_index;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	find_the_index = *h;
	while (find_the_index->next != NULL)
	{
		if (now == idx)
			break;
		find_the_index = find_the_index->next;
		now++;
	}
	if (idx > now)
		return (NULL);
	new->next = find_the_index;
	new->prev = find_the_index->prev;
	find_the_index->prev = new;
	(new->prev)->next = new;
	new->n = n;
	return (new);
}
