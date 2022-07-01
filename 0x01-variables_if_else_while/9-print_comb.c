#include <stdio.h>

/**
 * main - prints a series of numbers with decimal
 *
 * Return: Always(success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
		putchar(c);
	        if (c !='9')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(c);
		return (0);
}

