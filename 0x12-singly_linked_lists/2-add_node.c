#include "lists.h"
#include <string.h>

/**
 * _strlen - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

int _strlen(char *s)
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
 * add_node - adds a node to the beginning of a singly linked list
 * @head: a pointer to the beginning of the first node of a SLL
 * @str : a string to be stored in the new node of the SLL
 *
 * Return: a pointer to the newly created node
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		return (NULL);
	}
	current->str = strdup(str);
	current->len = _strlen((current)->str);
	current->next = (*head);
	(*head) = current;
	return (*head);
}
