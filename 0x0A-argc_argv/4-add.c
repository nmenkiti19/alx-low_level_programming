#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 *        followed by a new line
 * @argc: arguments count
 * @argv: argument values
 *
 * Return: If one of the numbers contains non-digit symbols - 1
 *         Else - 0
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
