#include "lists.h"

/**
 * list_len - prints all the nodes of a singly linked list
 * @h: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		count++;
		h = (*h).next;
	}
	return (count);
}
