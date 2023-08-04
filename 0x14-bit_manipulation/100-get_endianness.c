#include "main.h"

/**
 * get_endianness - prints all the nodes of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

int get_endianness(void)
{
	unsigned int x = 0x86739174;
	char *s = (char *)&x;

	if (*s == 0x74)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
