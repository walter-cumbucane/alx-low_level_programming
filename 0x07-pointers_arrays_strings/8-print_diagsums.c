#include <stdio.h>

/**
 *print_diagsums -checks for a lowercase character
 *@a: letter being tested
 *@size: letter being testes
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int main;
	int reverse;

	i = 0;
	main = 0;
	reverse = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
			{
				main += *(*(a + i) + j);
			}
			if (i + j == size - 1)
			{
				reverse += *(*(a + i) + j);
			}
			j++;
		}
		i++;
	}
	printf("%d, %d\n", main, reverse);
}
