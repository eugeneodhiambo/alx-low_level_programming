#include <stdio.h>

/**
 * main - Prints single digits fromzero to nine
 *
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9'; c++)
		putchar(c);
	
	putchar('\n');
	
	return (0);
}
