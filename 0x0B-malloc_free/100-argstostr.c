#include <stdlib.h>

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
 * _amount - set the integer to 402
 * @n: a pointer the integer we want to set to 98
 * @argv : letter being test
 * Return: nothing
 */

int _amount(int n, char **argv)
{
	int i;
	int amount;

	i = 1;
	amount = 0;
	while (i <= n)
	{
		amount += _strlen(*(argv + i)) + 1;
		i++;
	}
	return (amount + 1);
}

/**
 * argstostr - set the integer to 402
 * @ac: a pointer to the beginning of a string
 * @av : letter being tested
 * Return: nothing
 */

char *argstostr(int ac, char **av)
{
	int amount, i, j, p;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	amount = _amount(ac - 1, av);
	s = malloc(sizeof(char) * amount);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	p = 0;
	while (*(av + i) != 0)
	{
		j = 0;
		while (*(*(av + i) + j) != 0)
		{
			*(s + p) = *(*(av + i) + j);
			p++;
			j++;
		}
		*(s + p) = '\n';
		p++;
		i++;
	}
	*(s + p) = 0;
	return (s);
}
