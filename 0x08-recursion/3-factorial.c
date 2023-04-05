#include "main.h"
/**
 * factorial  - returns factorial of given number
 * @n: integer function parameter
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
