#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - set the integer to 402
 * @d: a pointer the integer we want to set to 98
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}
	printf("Name: %s\n", (*d).name);

	if ((*d).owner == NULL)
	{
		(*d).owner = "(nil)";
	}
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
