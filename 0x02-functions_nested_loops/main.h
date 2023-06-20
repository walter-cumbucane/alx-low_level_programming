/* * It is not recommended to put function definitions 
* in a header file. Ideally there should be only
* function declarations. Purpose of this code is
* to only demonstrate working of header files.
*/


/* *_putchar function declaration */
int _putchar(char c);


/* * Task 1 function declaration */
void print_alphabet(void)
{
	int i = 97;
	while (i <= 122)
	{
		_putchar(i);
		if (i == 122)
		{
			_putchar('\n');
		}
		i++;
	}
}
