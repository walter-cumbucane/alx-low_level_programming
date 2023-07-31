#include "lists.h"

/**
 * add_nodeint - prints all the nodes of a singly linked list
 * @head : a pointer that contains the address of the head pointer
 * @n: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).next = *head;
	(*new).n = n;
	*head = new;
	return (*head);
}
