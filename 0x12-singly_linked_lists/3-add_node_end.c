#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

unsigned int _strlen(const char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * add_node_end - adds a node to the end of a singly linked list
 * @head: a pointer to the beginning of the first node of a SLL
 * @str : a string to be stored in the new node of the SLL
 *
 * Return: a pointer to the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}
	current = (*head);
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
