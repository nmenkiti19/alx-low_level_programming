#include "main.h"

int solvesqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * solve_sqrt - Finds the natural square root of a number.
 * @othern: integer parameter
 * @root: integer parameter
 *
 * Return: square root if number has natural square root
 *         -1 if number has no natural square root
 */
int solve_sqrt(int othern, int root)
{
	if ((root * root) == othern)
		return (root);

	if (root == othern / 2)
		return (-1);

	return (solve_sqrt(othern, root + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: integer parameter
 *
 * Return: natural square root of n if n has a natural square root
 *         -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (solve_sqrt(n, root));
}
