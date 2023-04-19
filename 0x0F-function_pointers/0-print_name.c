#include "function_pointers.h"
/**
 * print_name - prints a name
 * @*name - parameter pointer
 * @*f - function pointer parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
