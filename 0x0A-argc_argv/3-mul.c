#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	if (argc == 1)
	{	
		printf("0\n");
		return (0);
	}
	else
	{
		int i;
		int mul;

		i = 1;
		mul = 1;
		while (i < argc)
		{
			if ( isdigit(**(argv + i)) == 0)
			{
				printf("Error\n");
				return (1);
			}
			mul *= atoi(*(argv + i));
			i++;
		}
		printf("%d\n", mul);
		return (0);
	}
}
