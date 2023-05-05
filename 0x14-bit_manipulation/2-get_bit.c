#include "main.h"
#include "stdlib.h"

/**
 * get_bit - finds the value of a bit at an index
 * @n: input number
 * @index: index of the bit
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int rtshft; 
	if (index > 63)
		return (-1);

	rtshft = n >> index;
	return ((rtshft ) & 1);
}
