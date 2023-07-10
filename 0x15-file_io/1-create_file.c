#include "main.h"

/**
 * create_file - Creates file
 * @filename: file pointer
 * @text_content: string to write to file
 *
 * Return: -1 if function fails
 *         else 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, size = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content && *(text_content + size)
			size++;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fd, text_content, size);

	if (fd == -1 || wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
