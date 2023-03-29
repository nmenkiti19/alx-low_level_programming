#include "main.h"
/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
			if (s[i] == s1[j])
				s[i] = s2[j / 2];
	}
	return (s);
}
