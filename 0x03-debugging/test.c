#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= c && a >= b)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}
	/*  else
	{
		largest = a;
	}
	*/
	return (largest);
}

int main(void)
{
	int a =5;
	int b = 500;
	int c = 500;
	int largest;

	largest = largest_number(a, b, c);
	printf("%d\n", largest);
	return (0);
}
