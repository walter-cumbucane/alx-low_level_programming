#include <stdio.h>


/**
 * main - Entry point
 *@argc : number of arguments inserted
* @argv : array of strings, where each string is an argument that was inserted
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
}

