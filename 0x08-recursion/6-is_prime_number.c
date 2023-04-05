#include "main.h"

/**
 * check_prime - checks if a number is a prime number.
 * @n: integer parameter
 * @i: integer parameter
 * Return: 1 if n is prime and 0 if n is not prime.
 */
int check_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime(n, i + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (check_prime(n, 2));
}
