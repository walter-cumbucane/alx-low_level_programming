#include <stdio.h>
#include <stdlib.h>


/**
 *_ispositive - checks for a lowercase character
 *@n: letter being tested
 * Return: Always 0
 */

int _ispositive(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


/**
 *do_it - checks for a lowercase character
 *@num: letter being tested
 * Return: Always 0
 */

int do_it(int num)
{
	int coins;

	coins = 0;
	while (num > 0)
	{
		if (num >= 25)
		{
			coins++;
			num -= 25;
			continue;
		}
		else if (num >= 10)
		{
			coins++;
			num -= 10;
			continue;
		}
		else if (num >= 5)
		{
			coins++;
			num -= 5;
			continue;
		}
		else if (num >= 2)
		{
			coins++;
			num -= 2;
			continue;
		}
		else
		{
			coins++;
			num -= 1;
		}
	}
	return (coins);
}


/**
* main - Entry point
 *@argc : number of arguments inserted
* @argv : array of strings, where each string is an argument that was inserted
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (_ispositive(atoi(*(argv + 1))) == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int num;

		num = atoi(*(argv + 1));
		printf("%d\n", do_it(num));
		return (0);
	}
}
