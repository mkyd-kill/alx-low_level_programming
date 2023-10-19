#include "main.h"
/**
 * read_textfile - prints to POSIX output
 * @filename: File
 * @letters: Characters in the file
 * Return: Number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_reader;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_reader = read(fd, buffer, letters);
	if (bytes_reader == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, bytes_reader) != bytes_reader)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_reader);
}
