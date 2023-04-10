#include "main.h"

/**
 * read_textfile - reads text file and outputs it to the POSIX STDOUT.
 * @filename: pointer to the textfile to read.
 *
 * @letters: number of letters to read and print.
 *
 * Return: the actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[bytes_read] = '\0';
	if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_read);
}
