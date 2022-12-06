#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_context: str to write to file
 * Return: 1 if success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n_wr = write(fd, text_content, strlen(text_content));
	if (n_wr == -1 || (int) n_wr != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return(1);
}
