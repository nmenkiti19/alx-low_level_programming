#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated
 * space in memory, containing a copy of the string given as a
 * parameter.
 * @str: input pointer of string to copy
 * Return: pointer to new string or NULL if str is NULL
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int strlen;
	char *c;

	if (str == NULL)
		return (NULL);

	for (strlen = 0; str[strlen] != '\0'; strlen++);

	c = malloc((strlen + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
	{
		c[i] = str[i];
	}

	c[strlen] = '\0';

	return (c);
}
