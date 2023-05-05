#include "main.h"
/**
 * clear_bit - sets the value at index of a bit to 0
 * @n: pointer to input
 * @index: index
 * Return: 1 if successful -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;

	max = 63;
	if (index > max)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
