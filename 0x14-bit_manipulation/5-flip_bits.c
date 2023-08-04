#include "main.h"

/**
 * flip_bits - prints all the nodes of a singly linked list
 * @n: a pointer to the first node of a singly linked list
 * @m : the desired index
 * Return: the number of nodes of a singly linked list
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i;
	int num;
	int mum;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		mum = m >> i;
		if (num & 1)
		{
			if (mum & 1)
				continue;
			else
			{
				count++;
				continue;
			}
		}
		else
		{
			if (mum & 1)
			{
				count++;
				continue;
			}
			else
				continue;
		}
	}
		return (count);
}
