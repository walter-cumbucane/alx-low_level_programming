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
	int n1;
	int n2;
	int i;

	n1 = 1;
	n2 = 2;
	printf("%d, ", n1);
	printf("%d, ", n2);
	i = 2;
	while (i <= 50)
	{
		n1 += n2;
		printf("%d, ", n1);
		i++;
		if (i == 50)
		{
			n2 += n1;
			printf("%d\n", n2);
		}
		else
		{
			n2 += n1;
			printf("%d, ", n2);
		}
		i++;
	}
	return (0);
}
