#include "main.h"

/**
 * _strlen - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

int _strlen(const char *s)
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
 * _power - set the integer to 402
 * @i: a pointer the integer we want to set to 98
 * @len : the length of the string
 *
 * Return: nothing
 */

int _power(int i, int len)
{
	int j = 0;
	int pow = 1;

	while (j < len - i - 1)
	{
		pow *= 2;
		j++;
	}
	return (pow);
}



/**
 * binary_to_uint - prints all the nodes of a singly linked list
 * @b: a pointer to the first node of a singly linked list
 *
 * Return: the number of nodes of a singly linked list
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;
	int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (*(b + i) != 0)
	{
		if (*(b + i) != 48 && *(b + i) != 49)
			return (0);
		if (*(b + i) == 48)
			num += 0;
		else
			num += _power(i, len);
		i++;
	}
	return (num);
}
