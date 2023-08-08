#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * err - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 * @a: a flag
 * Return: nothing
 */

void err(char *s, int a)
{
	if (a == 0)
	{
		dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", s);
		exit(98);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error : Can't write to %s\n", s);
		exit(99);
	}
}

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @argc : number of arguments in the command line
 * @argv : array of all arguments in the command line
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int fd_source, fd_destin, check, wrt, check1;
	char *str;

	str = malloc(BUFSIZ * sizeof(char));
	if (str == NULL)
		return (1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_source = open(*(argv + 1), O_RDONLY);
	if (fd_source < 0)
		err(*(argv + 1), 0);
	fd_destin = open(*(argv + 2), O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((wrt = read(fd_source, str, BUFSIZ)) > 0)
	{
		if (fd_destin < 0 || write(fd_destin, str, wrt) != wrt)
		{
			close(fd_source);
			err(*(argv + 2), 1);
		}
	}
	if (wrt < 0)
		err(*(argv + 1), 0);
	check = close(fd_source);
	check1 = close(fd_destin);
	if (check < 0 || check1 < 0)
	{
		if (check < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		if (check1 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_destin);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
