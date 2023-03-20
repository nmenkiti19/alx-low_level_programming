#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: The function main is the entry point of the program
 * Return: 1 is returned showing SUCCESS
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
