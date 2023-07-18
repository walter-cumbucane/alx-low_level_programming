#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - set the integer to 402
 * @d: a pointer the integer we want to set to 98
 * @name : a letter being tested
 * @age : a letter being tested
 * @owner : a letter being tested
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
