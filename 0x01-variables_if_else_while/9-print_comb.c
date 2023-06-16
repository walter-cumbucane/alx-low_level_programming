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

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
