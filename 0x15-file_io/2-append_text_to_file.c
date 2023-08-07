#include "main.h"
#include <unistd.h>
#include <fcntl.h>


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
 * append_text_to_file - set the integer to 402
 * @filename: a pointer the integer we want to set to 98
 * @text_content : number of letters to be printed and read
 * Return: the number of letters it could read and print
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND | O_EXCL);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	check = write(fd, text_content, _strlen(text_content));
	if (check == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
