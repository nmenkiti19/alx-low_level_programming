#include "main.h"
#include <stdlib.h>
char **strtow(char *str);
/**
 * ch_free_grid - frees a 2-d array.
 * @grid: multidimensional array of char
 * @height: height of array
 *
 * Return: nothing
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits tring into words
 * @str: string param
 *
 * Return: pointer of array of integers
 */
char **strtow(char *str)
{
	char **memall;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	memall = malloc((height + 1) * sizeof(char *));
	if (memall == NULL || height == 0)
	{
		free(memall);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				memall[i] = malloc((c - a1 + 2) * sizeof(char));
				if (memall[i] == NULL)
				{
					ch_free_grid(memall, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			memall[i][j] = str[a1];
		memall[i][j] = '\0';
	}
	memall[i] = NULL;
	return (memall);
}
