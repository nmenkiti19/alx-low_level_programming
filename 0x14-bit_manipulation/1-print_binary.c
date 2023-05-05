#include "main.h"

/**
 * print_binary - prints a binary number without % or /
 * @n: input number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int temp = 0, thresh = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (thresh)
	{
		if (temp == 1 && (n & thresh) == 0)
			_putchar('0');
		else if ((n & thresh) != 0)
		{
			_putchar('1');
			temp = 1;
		}
		thresh >>= 1;
	}
}
