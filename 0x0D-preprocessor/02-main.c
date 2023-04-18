#include <stdio.h>
/**
 * main: function where name of file compiled 
 * from is printed
 * Return - always returns 0
 */
int main(void)
{
	printf("The name of the file it was compiled from is %s\n", __FILE__);
	return (0);
}
