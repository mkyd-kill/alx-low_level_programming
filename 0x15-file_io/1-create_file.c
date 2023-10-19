#include "main.h"
/**
 * create_file - created a file
 * @filename: File
 * @text_content: NULL terminator
 * Return: 1 for success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, str_len, file_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len] != '\0'; str_len++)
			;
		file_write = write(fd, text_content, (str_len));
		if (file_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
