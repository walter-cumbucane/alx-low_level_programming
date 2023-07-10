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
 * @s1: a pointer the integer we want to set to 98
 * @s2 : letter being test
 * Return: nothing
 */

int _amount(char *s1, char *s2)
{
	int amount, len1, len2;

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
	amount = len1 + len2 + 1;
	return (amount);
}

/**
 * _concatenate_string - set the integer to 402
 * @s1: a pointer to the beginning of a string
 * @s2 : letter being tested
 * @s : letter being tested
 * @i : letter being tested
 * @j : letter being tested
 * Return: nothing
 */

char *_concatenate_string(char *s1, char *s2, char *s, int i, int j)
{
	if (s1 == NULL && s2 == NULL)
	{
		*s = 0;
	}
	else if (s1 == NULL)
	{
		while (*(s2 + i) != 0)
		{
			*(s + i) = *(s2 + i);
			i++;
		}
		*(s + i) = 0;
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
		while (*(s1 + i) != 0)
		{
			*(s + i) = *(s1 + i);
			i++;
		}
		while (*(s2 + j) != 0)
		{
			*(s + i) = *(s2 + j);
			i++;
			j++;
		}
		*(s + i) = 0;
	}
	return (s);
}

/**
 * str_concat - set the integer to 402
 * @s1: a pointer to the beginning of a string
 * @s2 : letter being tested
 * Return: nothing
 */

char *str_concat(char *s1, char *s2)
{
	char *s, *result;
	int amount;

	amount = _amount(s1, s2);
	s = malloc(sizeof(char) * amount);
	if (s == NULL)
	{
		return (s);
	}
	result = _concatenate_string(s1, s2, s, 0, 0);
	return (result);
}
