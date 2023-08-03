#include "main.h"

/**
 * print_binary - prints all the nodes of a singly linked list
 * @n: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

void print_binary(long unsigned int n)
{
	int i;
	int flag = 0;
	long unsigned int current;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	else if (n == 1)
	{
		_putchar(49);
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar(49);
			flag = 1;
		}
		else
		{
			if (flag == 0)
				continue;
			_putchar(48);
		}
	}
}
