#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output.
 * @filename: file to read from.
 * @letters: size to read.
 * Return: actual size read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* file descriptor */
	int fd;
	ssize_t n_rd, n_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	n_rd = read(fd, buffer, letters);
	if (n_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	n_wr = write(STDOUT_FILENO, buffer, n_rd);
	if (n_wr == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_rd);
}
