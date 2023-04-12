#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to concatenate to s1
 *
 * Return: If concatenation fails - NULL
 *         Else pointer to newly-allocated space in memory
 *                     containing concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i;
	unsigned int j;
	unsigned int strlen1;
	unsigned int strlen2;
	unsigned int result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (strlen1 = 0; s1[strlen1] != '\0'; strlen1++)
		;

	for (strlen2 = 0; s2[strlen2] != '\0'; strlen2++)
		;

	result = strlen1 + strlen2;

	concat = malloc((result + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < strlen1; i++)
		concat[i] = s1[i];

	for (j = 0; j < strlen2; i++, j++)
		concat[i] = s2[j];

	return (concat);
}
