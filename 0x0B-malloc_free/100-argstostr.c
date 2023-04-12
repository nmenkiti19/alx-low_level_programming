#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all args of a program
 * @ac: argc
 * @av: argv
 *
 * Return: pointer of array of char
 */
char *argstostr(int ac, char **av)
{
	char *memall;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	memall = malloc((c + 1) * sizeof(char));

	if (memall == NULL)
	{
		free(memall);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			memall[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			memall[ia] = av[i][j];
	}
	memall[ia] = '\0';

	return (memall);
}
