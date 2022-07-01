#include <stdio.h>

/**
 * main - print lowercase alphabets but omit q and e
 *
 * Return: Always(success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
