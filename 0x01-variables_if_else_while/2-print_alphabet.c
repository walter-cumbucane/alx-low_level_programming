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
	for (int i = 97 ; i <= 122; i++)
	{
		if (i == 122)
		{
			putchar(i);
			putchar('\n');
		}
		else
		{
			putchar (i);
		}
	}
	return (0);
}
