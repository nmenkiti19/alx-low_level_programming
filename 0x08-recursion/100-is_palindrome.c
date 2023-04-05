#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - length of a string
 * @s: string parameter
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks recursively for palindrome
 * @pal: string parameter
 * @i: integer parameter
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *pal, int i, int len)
{
	if (*(pal + i) != *(pal + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(pal, i + 1, len - 1));
}
