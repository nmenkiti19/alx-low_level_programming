#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, square = size * size, s1 = 0, s2 = 0;

	for (; i < square; i += size + 1)
		s1 += a[i];

	for (i = size - 1; i < square - 1; i += size - 1)
		s2 += a[i];

	printf("%d, %d\n", s1, s2);
}
