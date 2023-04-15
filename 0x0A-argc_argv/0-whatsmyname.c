#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: command line arguments count
 * @argv: argument value showing strings that come after the function
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
