/**
 *reverse_array -checks for a lowercase character
 *@a: letter being tested
 *@n : letter being tested
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		n--;
		*(a + i) = *(a + n);
		i++;
	}
}
