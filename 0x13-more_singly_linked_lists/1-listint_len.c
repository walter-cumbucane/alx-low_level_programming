#include "lists.h"

/**
 * listint_len - prints all the nodes of a singly linked list
 * @h: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

size_t listint_len(const listint_t *h)
{
	int len;

	if (h == NULL)
		return (0);
	len = 0;
	while (h != NULL)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
