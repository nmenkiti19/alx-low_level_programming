#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: count of arguments
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}
