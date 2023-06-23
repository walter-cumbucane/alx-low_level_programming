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
	long j;
	long div;

	max = 0;
	i = 2;
	while (i < 612852475143)
	{
		j = 1;
		div = 0;
		while (j <= i)
		{
			if (i % j == 0)
			{
				div += 1;
			}
			j++;
		}
		if (div == 2)
		{
			if (612852475143 % i == 0 && i > max)
			{
				max = i;
			}
		}
		i++;
	}
	printf("%li\n", max);
	return (0);
}
