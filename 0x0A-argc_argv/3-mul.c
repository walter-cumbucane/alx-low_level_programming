#include <stdio.h>
#include <stdlib.h>

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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i;
		int mul;

		i = 1;
		mul = 1;
		while (i < argc)
		{
			mul *= atoi(*(argv + i));
			i++;
		}
		printf("%d\n", mul);
		return (0);
	}
}

