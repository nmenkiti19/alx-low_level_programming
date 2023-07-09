#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *input = (char *)&i;

	if (*input)
		return (1);
	return (0);
}
