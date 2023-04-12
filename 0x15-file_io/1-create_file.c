#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * create_file -creates an array of chars, and initializes
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	size_t text_len;

	if (filename == NULL)
		return (-1);

	text_len = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, text_len);
	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
