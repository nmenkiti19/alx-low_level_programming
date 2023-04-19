#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: integer array
 * @size: array size
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array || size || action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
