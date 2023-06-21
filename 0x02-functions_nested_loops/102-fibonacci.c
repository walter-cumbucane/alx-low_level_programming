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
	long n1;
	long n2;
	int i;

	n1 = 1;
	n2 = 2;
	printf("%ld, ", n1);
	printf("%ld, ", n2);
	i = 2;
	while (i <= 49)
	{
		n1 += n2;
		printf("%ld, ", n1);
		i++;
		if (i == 49)
		{
			n2 += n1;
			printf("%ld\n", n2);
			i++;
		}
		else
		{
			n2 += n1;
			printf("%ld, ", n2);
			i++;
		}
	}
	return (0);
}
