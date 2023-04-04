#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	for (; i < 8; i++)
	{
		j = 0;

		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

	_putchar('\n');
	}
}
