#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of argument types passed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list vlist;
	unsigned int i, j, n;
	char *str;
	const char temp[] = "cifs";

	va_start(vlist, format);
	i = 0, n = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (temp[j])
		{
			if (format[i] == temp[j] && n)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(vlist, int)), n++;
			break;
		case 'i':
			printf("%d", va_arg(vlist, int)), n++;
			break;
		case 'f':
			printf("%f", va_arg(vlist, double)), n++;
			break;
		case 's':
			str = va_arg(vlist, char *), n++;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n");
	va_end(vlist);
}
