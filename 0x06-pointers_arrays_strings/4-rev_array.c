/**
 *reverse_array -checks for a lowercase character
 *@a: letter being tested
 *@n : letter being tested
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int p;

	i = 0;
	while (i < n)
	{
		n--;
		p = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = p;
		i++;
	}
}
