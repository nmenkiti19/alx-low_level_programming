#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;

	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}
	}

	return (s);
}
