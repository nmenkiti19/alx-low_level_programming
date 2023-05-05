#include "main.h"

/**
 * flip_bits - gets number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: number to flip
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			count++;
	}

	return (count);
}
