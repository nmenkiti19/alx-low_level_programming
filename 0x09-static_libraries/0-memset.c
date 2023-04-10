#include "main.h"

/**
 * _memset - function fills memory with constant bytes
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes of memory ara
 * Return: returns pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
