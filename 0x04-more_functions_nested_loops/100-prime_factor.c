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
	long i;
	long max;

	max = 0;
	i = 1;
	while (i < 612852475143)
	{
		if ((612852475143 % i == 0) && (i > max))
		{
			max = i;
		}
		i++;
	}
	printf("%li\n", max);
	return (0);
}
