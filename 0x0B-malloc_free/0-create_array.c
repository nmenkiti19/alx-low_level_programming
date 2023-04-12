#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char param
 *
 * Return: pointer of array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
