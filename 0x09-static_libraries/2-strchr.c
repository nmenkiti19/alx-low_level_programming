#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurance of the character c
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
