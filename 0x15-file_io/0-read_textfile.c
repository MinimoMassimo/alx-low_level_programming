#include "main.h"

/**
 * read_textfile - reads a file and prints it to stdout
 * @filename: the text file
 * @letters: the num of letters the function should read and print
 * Return: actual num of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* file descriptor*/
	int fd;
	ssize_t n_rd, n_wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	n_rd = read(fd, buffer, letters);
	if (n_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
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
