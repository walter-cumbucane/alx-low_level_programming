#include "lists.h"


/**
 * add_nodeint_end - prints all the nodes of a singly linked list
 * @head : a pointer that contains the address of the head pointer
 * @n: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *findtheend;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}
	findtheend = (*head);
	while (findtheend->next != NULL)
		findtheend = findtheend->next;
	findtheend->next = new;
	return (new);
}
