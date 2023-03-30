#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int a, b, i;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	i = 1;

	while (b > 9)
	{
		b /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((a / i) % 10) + 48);
	}
}
