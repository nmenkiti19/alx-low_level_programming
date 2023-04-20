#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of its own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 
 * else 0 on success
 */
int main(int argc, char *argv[])
{
	int no_bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	no_bytes = atoi(argv[1]);
	if (no_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	i = 0;
	if (no_bytes > 0)
	{
		while (i < (no_bytes - 1))
			printf("%02hhx ", func_ptr[i++]);
		printf("%hhx\n", func_ptr[i]);
	}
	return (0);
}
