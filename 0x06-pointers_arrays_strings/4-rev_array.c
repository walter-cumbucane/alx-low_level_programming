#include <stdio.h>

/**
 *rev_array -checks for a lowercase character
 *@a: letter being tested
 *@n : letter being tested
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i == 0)
		{
			printf("%d\n", *(a + i));
			i--;
		}
		else
		{
			printf("%d, ", *(a + i));
			i--;
		}
	}
}
