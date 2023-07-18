#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - set the integer to 402
 * @name : a letter being tested
 * @age : a letter being tested
 * @owner : a letter being tested
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	dog_t *ptr;

	ptr = &d;
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	return (ptr);
}
