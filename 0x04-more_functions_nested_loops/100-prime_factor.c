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
	long int n;
	long int i;

	n = 612852475143;
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			n /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", i);
	return (0);
}
