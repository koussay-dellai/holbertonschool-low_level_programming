#include "holberton.h"
/**
 * read_textfile - function to read and write a file
 * @filename: pointer to file
 * @letters: size_t
 * Return: return the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdread, fdwrite, fdclose;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fdread = read(fd, buffer, letters);
	if (fdread == -1)
		return (-1);
	fdwrite = write(STDOUT_FILENO, buffer, fdread);

	if (fdwrite == -1)
		return (-1);
	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);
	return (fdread);
}
