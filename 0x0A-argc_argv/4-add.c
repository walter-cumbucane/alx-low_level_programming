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
		int sum;
		int j;

		i = 1;
		sum = 0;
		while (i < argc)
		{
			j = 0;
			while (*(*(argv + i) + j) != 0)
			{
				if (isdigit(*(*(argv + i) + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(*(argv + i));
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
}
