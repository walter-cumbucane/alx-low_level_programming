#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the nodes of a singly linked list
 * @h: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		count++;
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
			h = (*h).next;
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
			h = (*h).next;
		}
	}
	return (count);
}
