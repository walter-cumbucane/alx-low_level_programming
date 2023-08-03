#include "main.h"

/**
 * get_bit - prints all the nodes of a singly linked list
 * @n: a pointer to the first node of a singly linked list
 * @index : the desired index
 * Return: the number of nodes of a singly linked list
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int current;

	if (index > 63)
		return (-1);
	current = n >> index;
	if (current & 1)
		return (1);
	else
		return (0);
}
