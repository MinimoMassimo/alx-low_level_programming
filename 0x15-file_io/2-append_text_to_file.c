#include "main.h"

/**
 * _len - length of string
 * @str: the string
 * Return: length of the string
 */
int _len(char *str)
{
	int len;

	for (len = 0; str[len] != 0; len++)
		;
	return (len);
}

/**
 * append_text_to_file - appends text to end of file
 * @filename: the file
 * @text_content: string to add
 * Return: 1 if success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n_wr = write(fd, text_content, _len(text_content));
	if (n_wr == -1 || n_wr != _len(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
