#include <unistd.h>
#include <fcntl.h>
#include "main.h"


/**
 * read_textfile - set the integer to 402
 * @filename: a pointer the integer we want to set to 98
 * @letters : number of letters to be printed and read
 * Return: the number of letters it could read and print
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd, check;
	char *file_content;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	file_content = malloc(sizeof(char) * (letters + 1));
	if (file_content == NULL)
		return (0);
	check = read(fd, file_content, letters);
	if (check == -1)
		return (0);
	*(file_content + letters) = '\0';
	check = write(STDOUT_FILENO, file_content, letters);
	if (check == -1)
		return (0);
	return (check);
}
