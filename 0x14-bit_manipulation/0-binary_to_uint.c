#include "main.h"
#include <stdlib.h>


/**
 * findlength - find the length of the string
 * @input: string pointer
 *
 * Return: string length
 */
unsigned int findlength(char const *input)
{
	unsigned int i;

	for (i = 0; input[i] != '\0'; i++)
		;
	return (i);
}

/**
 * findpower - find the power of a number
 * @n:  number
 * @exp: exponent
 *
 * Return: power of the number
 */
unsigned int findpower(unsigned int n, unsigned int exp)
{
	unsigned int i, power = 1;

	if (exp == 0)
		return (1);

	for (i = 0; i < exp; i++)
		power *= n;

	return (power);
}

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: A pointer to a string of 0s and 1s
 *
 * Return: the unsigned int, or 0 if there is 1 or more chars
 *         in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, blen, bsum, bpow;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	blen = findlength(b);
	bsum = 0;
	for (i = 0, j = blen; i < blen; i++, j--)
	{
		bpow = findpower(2, j - 1);
		bsum += (((b[i]) - '0') * bpow);
	}
	return (bsum);
}
