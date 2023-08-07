#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * _strlen - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */
size_t _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}


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
 * err_close - set the integer to 402
 * @fd: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

void err_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
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
	int fd_source, fd_destin, check;
	char *str;

	str = malloc(1024 * sizeof(char));
	if (str == NULL)
		return (1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_source = open(*(argv + 1), O_RDONLY);
	if (fd_source == -1)
		err(*(argv + 1), 0);
	fd_destin = open(*(argv + 2), O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_destin == -1)
		err(*(argv + 2), 1);
	check = read(fd_source, str, 1024);
	if (check == -1)
		err(*(argv + 1), 0);
	check = write(fd_destin, str, _strlen(str));
	if (check == -1)
		err(*(argv + 2), 1);
	check = close(fd_source);
	if (check == -1)
		err_close(fd_source);
	check = close(fd_destin);
	if (check == -1)
		err_close(fd_destin);
	return (EXIT_SUCCESS);
}
