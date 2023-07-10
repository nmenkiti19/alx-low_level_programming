#include "main.h"

/**
 * append_text_to_file - Appends text to the EOF
 * @filename: file pointer
 * @text_content: string to be appended to EOF
 *
 * Return: -1 if it fails or filename is NULL
 *   or no write permission
 *         else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[size])
			size++;

		fd = open(filename, O_WRONLY | O_APPEND);
		wrt = write(fd, text_content, size);

		if (fd == -1 || wrt == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
