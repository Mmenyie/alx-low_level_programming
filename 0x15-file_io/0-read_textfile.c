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
	int fd;
	ssize_t bytes_read, bytes_written;
	char buffer[letters];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_written);
}
