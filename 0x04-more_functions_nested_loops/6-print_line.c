#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
