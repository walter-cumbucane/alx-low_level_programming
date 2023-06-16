#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j;
	int z;

	while (i <= 55)
	{	j = i + 1;
		while (j <= 56)
		{
			z = j + 1;
			while (z <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i == 55 && j == 56 && z == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
