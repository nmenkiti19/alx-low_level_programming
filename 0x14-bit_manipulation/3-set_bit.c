#include "main.h"
/**
 * set_bit - sets bit at index to 1
 * @n: pointer to input
 * @index: index of input
 * Return: 1 if successful, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;

	max = 63;

	if (index > max)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
