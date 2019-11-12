#include "holberton.h"
/**
 * create_file - function that creates file
 * @filename: pointer to file
 * @text_content: string to be written
 * Return: always success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, fdwrite;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	fdwrite = write(fd, text_content, len);
	if (fdwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
