/**
 * swap_int - set the integer to 402
 * @a: a pointer the integer we want to swap
 *@b : a pointer the integer we want to swap
 *
* Return: nothing
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = *a;
	b = *b;
	*a = b;
	*b = a;
}
