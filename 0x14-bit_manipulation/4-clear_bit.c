#include "main.h"

/**
 * clear_bit - prints all the nodes of a singly linked list
 * @n: a pointer to the first node of a singly linked list
 * @index : the desired index
 * Return: the number of nodes of a singly linked list
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);
	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
