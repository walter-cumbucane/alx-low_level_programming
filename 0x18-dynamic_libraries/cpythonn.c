#include "main.h"

/**
 * add - adds two numbers
 * @a: number to be addes
 * @b: number to be added
 * Return: nothing
 */

int add(int a, int b)
{
	return (a + b);
}


/**
 * sub - subtracts two numbers
 * @a : number to be subtracted
 * @b : number to be subtracted
 * Return: nothing
 */

int sub(int a, int b)
{
	return (a - b);
}



/**
 * mul - multiplies two numbers
 * @a: number to be multiplied
 * @b: number to be multiplied
 * Return: nothing
 */

int mul(int a, int b)
{
	return (a * b);
}


/**
 * div - divides two numbers
 * @a: number to be divided
 * @b: number to be divided
 *
 * Return: nothing
 */

int div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}


/**
 * mod - set the integer to 402
 * @a: a pointer the integer we want to set to 98
 * @b: letter being tested
 * Return: nothing
 */

int mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
