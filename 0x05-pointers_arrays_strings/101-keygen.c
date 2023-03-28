#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * for random generation of passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int passwd[50];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		passwd[i] = rand() % 38;
		sum += (passwd[i] + '0');
		putchar(passwd[i] + '0');
		if ((509 - sum) - '0' < 38)
		{
			n = 509 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
