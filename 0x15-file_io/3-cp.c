#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - copying contents to another file
 * @argc: Number of passed args
 * @argv: Array of args
 * Return: 0 success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	char *from, *to, buffer[BUFFER_SIZE];
	int fd_from, fd_to, bytes_read;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = argv[1];
	to = argv[2];
	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", to);
		exit(99);
	}
	bytes_read = read(fd_from, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (write(fd_to, buffer, bytes_read) == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
