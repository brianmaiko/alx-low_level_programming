#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with the specified name and writes the
 *		specified text to it.
 *
 * @filename: the name of the file to create.
 * @text_content: the text to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int xy, result, len = 0;

	if (filename == NULL)
		return (-1);
	xy = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (xy == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		result = write(xy, text_content, len);
		if (result == -1)
		{
			close(xy);
			return (-1);
		}
	}
	close(xy);
	return (1);
}
