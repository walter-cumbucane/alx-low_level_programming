#include "dog.h"


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
	int i = 0;

	while (*(d + i) != 0)
	{
		(*(d + i)).name = *(name + i);
		i++;
	}
	(*(d + i)).name = 0;
	(*d).age = age;
	i = 0;
	while (*(d + i) != 0)
	{
		(*(d + i)).owner = *(owner + i);
		i++;
	}
	(*(d + i)).owner = 0;
}
