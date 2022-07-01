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
		putchar(c);
		if(c == 'q' || 'e' )
			continue;
	}
	putchar('\n');

	return (0);
}
