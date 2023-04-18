#include <stdio.h>
/**
 * main - prints name of file where compiled
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("The name of the file it was compiled from is %s\n", __FILE__);
	return (0);
}
