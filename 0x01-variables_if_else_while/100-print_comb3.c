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

	while (i <= 56)
	{	j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}
