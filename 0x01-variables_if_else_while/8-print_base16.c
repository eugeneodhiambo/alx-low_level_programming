#include <stdio.h>

/**
 * main - prints hexadecimal
 *
 * Return: Always(succes)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
