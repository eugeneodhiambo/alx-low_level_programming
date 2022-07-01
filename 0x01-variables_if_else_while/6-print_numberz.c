#include <stdio.h>

/**
 * main - prints zero to nine
 *
 * Return: Always(success)
 */
int main(void)
{
	int number;

	for (number = '0'; number < '10'; number++)
		putchar(number);
	putchar('\n');
	return(0);
}
