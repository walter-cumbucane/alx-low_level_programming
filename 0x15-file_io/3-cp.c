#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * err - set the integer to 402
 * @fd: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

void err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * err_ver - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 * @flag : a flag
 *
 * Return: nothing
 */
void err_ver(char *s, int flag)
{
	if (flag == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
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
	int fd_source, fd_destin, check, wrt;
	char *str;

	str = malloc(sizeof(char) * BUFSIZ);
	if (str == NULL)
		return (1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_source = open(*(argv + 1), O_RDONLY);
	if (fd_source == -1)
		err_ver(*(argv + 1), 0);
	fd_destin = open(*(argv + 2), O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((wrt = read(fd_source, str, BUFSIZ)) > 0)
	{
		if (fd_destin == -1 || write(fd_destin, str, wrt) != wrt)
		{
			close(fd_source);
			err_ver(*(argv + 2), 1);
		}
	}
	if (wrt == -1)
		err_ver(*(argv + 1), 0);
	check = close(fd_source);
	if (check == -1)
		err(fd_source);
	check = close(fd_destin);
	if (check == -1)
		err(fd_destin);
	free(str);
	return (EXIT_SUCCESS);
}
