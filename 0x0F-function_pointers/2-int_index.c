#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers
 * @array: array of integers
 * @size: array size
 * @cmp: function pointer for comparing values
 *
 * Return: If no element matches or size <= 0 - -1
 *         Else - index of first element for which
 *                     cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((size >= 0) && (array || size || cmp))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
