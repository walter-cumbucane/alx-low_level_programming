#include <stdlib.h>

/**
 * _strlen - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

unsigned int _strlen(char *s)
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
 * @s1: a pointer the integer we want to set to 98
 * @s2 : letter being test
 * @n : letter being tested
 * Return: nothing
 */

unsigned int _amount(char *s1, char *s2, unsigned int n)
{
	unsigned int amount, len1, len2;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
		{
			len1 = 0;
		}
		else
		{
			len1 = _strlen(s1);
		}
		if (s2 == NULL)
		{
			len2 = 0;
		}
		else
		{
			len2 = _strlen(s2);
		}
	}
	else
	{
		len1 = _strlen(s1);
		len2 = _strlen(s2);
	}
	if (n >= len2)
	{
		amount = len1 + len2 + 1;
	}
	else
	{
		amount = len1 + n + 1;
	}
	return (amount);
}

/**
 * _t- set the integer to 402
 * @s1: a pointer to the beginning of a string
 * @s2 : letter being tested
 * @s : letter being tested
 * @n : letter being tested
 * @len2 : sletter being tested
 * Return: nothing
 */

char *_t(char *s1, char *s2, char *s, unsigned int n, unsigned int len2)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		if (n >= len2)
		{
			for (i = 0; *(s2 + i) != 0; i++)
				*(s + i) = *(s2 + i);
			*(s + i) = 0;
		}
		else
		{
			for (i = 0; i < n; i++)
				*(s + i) = *(s2 + i);
			*(s + i) = 0;
		}
	}
	else
	{
		for (i = 0; *(s1 + i) != 0; i++)
			*(s + i) = *(s1 + i);
		if (n >= len2)
		{
			for (j = 0; *(s2 + j) != 0; j++)
				*(s + i + j) = *(s2 + j);
			*(s + i + j) = 0;
		}
		else
		{
			for (j = 0; j < n; j++)
				*(s + i + j) = *(s2 + j);
			*(s + i + j) = 0;
		}
	}
	return (s);
}


/**
 * _con_str - set the integer to 402
 * @s1: a pointer to the beginning of a string
 * @s2 : letter being tested
 * @s : letter being tested
 * @i : letter being tested
 * @j : letter being tested
 * @n : letter being tested
 * Return: nothing
 */

char *_con_str(char *s1, char *s2, char *s, int i, int j, unsigned int n)
{
	unsigned int len2;

	(void)j;
	if (s2 != NULL)
	{
		len2 = _strlen(s2);
	}
	if (s1 == NULL && s2 == NULL)
	{
		*s = 0;
	}
	else if (s1 == NULL)
	{
		s = _t(s1, s2, s, n, len2);

	}
	else if (s2 == NULL)
	{
		while (*(s1 + i) != 0)
		{
			*(s + i) = *(s1 + i);
			i++;
		}
		*(s + i) = 0;
	}
	else
	{
		s = _t(s1, s2, s, n, len2);
	}
	return (s);
}

/**
 * string_nconcat - set the integer to 402
 * @s1: a pointer the integer we want to set to 98
 * @s2: a pointer to a string
 * @n: letter being tested
 * Return: nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *result;
	unsigned int amount;

	amount = _amount(s1, s2, n);
	s = malloc(sizeof(char) * amount);
	if (s == NULL)
	{
		return (s);
	}
	result = _con_str(s1, s2, s, 0, 0, n);
	return (result);
}
