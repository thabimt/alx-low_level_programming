#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at end of a file
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		ssize_t len = strlen(text_content);

		ssize_t bytes_written = write(fd, text_content, len);

		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
