#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a textfile and prints it to POSIX
 * filename: pointer that points to the name of the file.
 * @letters: the number of letters function read and print
 * Return: if filename can not open 0, if it is Null 0, if write fails 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	bytes_read = read(file_desc, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (file_desc == -1 || bytes_read == -1 || bytes_written == -1 ||
		bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_desc);

	return (bytes_written);
}
