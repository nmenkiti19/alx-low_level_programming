#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: count of integers passed
 * @...: A variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	unsigned int num;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(vlist, int);
		printf("%d", num);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(vlist);
	printf("\n");
}
