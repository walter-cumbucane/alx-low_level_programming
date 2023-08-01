#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the nodes of a singly linked list
 * @h: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (count);
}
