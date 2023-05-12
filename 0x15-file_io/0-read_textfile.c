#include "main.h"

/**
 * read_textfile - Reads text file and prints to POSIX
 * standard output
 * @filename: file pointer
 * @letters: count of letters to be read and printed
 *
 * Return: 0 if it fails pointer is NULL
 *         else expected number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wrt;
	char *temp;

	if (!filename)
		return (0);

	temp = malloc(letters * sizeof(char));
	if (!temp)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, temp, letters);
	wrt = write(STDOUT_FILENO, temp, rd);

	if (fd == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(fd);

	return (wrt);
}
