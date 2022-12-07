#include "main.h"
#include <stdio.h>

/**
 * _ex - for the exit codes
 * @err: the error num
 * @file: name of the file
 * @fd: the file descriptor
 * Return: 0 on default
 */
int _ex(int err, char *file, int fd)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(err);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(err);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(err);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(err);
		default:
			return (0);
	}
}


/**
 * main - copies content of a file to another file
 * @argc: num of args
 * @argv: the args
 * Return: 0 if success, 97->100 otherwise
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd1, fd2;
	int n_rd, n_wr;
	char buffer[1024];

	if (argc > 3)
		_ex(97, NULL, 0);
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		_ex(98, file_from, 0);
	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		_ex(99, file_to, 0);
	while ((n_rd = read(fd1, buffer, 1024)) != 0)
	{
		if (n_rd == -1)
			_ex(98,file_from, 0);
		n_wr = write(fd2, buffer, n_rd);
		if (n_wr == -1)
			_ex(99, file_to, 0);
	}

	close(fd1) == -1 ? (_ex(100, NULL, fd1)) : close(fd1);
	close(fd2) == -1 ? (_ex(100, NULL, fd2)) : close(fd2);
	return(0);
}
