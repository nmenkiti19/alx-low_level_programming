#include "main.h"

/**
 * _printexit - prints error messages and exits with value
 * @error: exit value or fd
 * @s: filenames pointer
 * @fd: file descriptor
 * Return: 0 on success
 **/
int _printexit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies file
 * @argc: arguments count
 * @argv: arguments for copy operation
 * Return: 0 if successful
 * else exit values of 97-100
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, file_from, file_to;
	char *buffer[1024];

	if (argc != 3)
		_printexit(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		_printexit(99, argv[2], 0);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		_printexit(98, argv[1], 0);

	while ((file_from = read(fd1, buffer, 1024)) != 0)
	{
		if (file_from == -1)
			_printexit(98, argv[1], 0);

		file_to = write(fd2, buffer, file_from);
		if (file_to == -1)
			_printexit(99, argv[2], 0);
	}

	close(fd2) == -1 ? (_printexit(100, NULL, fd2)) : close(fd2);
	close(fd1) == -1 ? (_printexit(100, NULL, fd1)) : close(fd1);
	return (0);
}
