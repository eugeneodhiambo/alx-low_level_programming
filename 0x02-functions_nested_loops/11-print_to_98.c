#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the number to be printed
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n >= 98)
			n--;
		else
			n++;
	}
}
