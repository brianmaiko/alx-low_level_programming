#include "main.h"

/**
 * error - prints error message and exits the program.
 * @msg: the error message to print.
 * @code: exit status code.
 *
 * Return: None.
 */

void error(char *msg, int code)
{
	int p = 0;

	while (msg[p] != '\0')
	{
		_putchar(msg[p]);
		p++;
	}
	exit(code);
}

/**
 * close_fd - closes a file descriptor and prints an error message if it fails.
 * @fd: the file descriptor.
 * @filename: name of file corresponding with the file descriptor.
 *
 * Return: None.
 */

void close_fd(int fd, char *filename)
{
	int xy;

	xy = close(fd);
	if (xy == -1)
		error("Error: Can't close fd ", 100);
}

/**
 * cp - copies content of a file to another file.
 * @file_from: the file to copy from.
 * @file_to: file to copy to.
 *
 * Return: None.
 */

void cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, ret_read, ret_write;
	char buf[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error("Error: Can't read from file ", 98);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error("Error: Can't write to ", 99);
	while ((ret_read = read(fd_from, buf, 1024)) > 0)
	{
		ret_write = write(fd_to, buf, ret_read);
		if (ret_write == -1 || ret_write != ret_read)
			error("Error: Can't write to ", 99);
	}
	if (ret_read == -1)
		error("Error: Can't read from file ", 98);
	close_fd(fd_from, file_from);
	close_fd(fd_to, file_to);
}
