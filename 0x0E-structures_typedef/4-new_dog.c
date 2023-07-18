#include "dog.h"
#include <stdlib.h>


/**
 * _strcpy - set the integer to 402
 * @dest: a pointer the integer we want to set to 98
 * @src : source message
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (7 > 5)
	{
		if (*(src + i) == 0)
		{
			*(dest + i) = 0;
			break;
		}
		else
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return (dest);
}


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
 * new_dog - set the integer to 402
 * @name : a letter being tested
 * @age : a letter being tested
 * @owner : a letter being tested
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	len1 = _strlen(name);
	len2 = _strlen(owner);
	(*ptr).name = malloc(len1 + 1);
	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	(*ptr).owner = malloc(len2 + 1);
	if ((*ptr).owner == NULL)
	{
		free((*ptr).name);
		free(ptr);
		return (NULL);
	}
	(*ptr).name = _strcpy((*ptr).name, name);
	(*ptr).owner = _strcpy((*ptr).owner, owner);
	(*ptr).age = age;
	return (ptr);
}
