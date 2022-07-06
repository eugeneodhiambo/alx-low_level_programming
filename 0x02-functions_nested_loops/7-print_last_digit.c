#include "main.h"

/**
 * print_last_digit - prints the last digit if a number
 * @n: number whose last digt is to be printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l < 10)
		l = -l;
	p = '0' + 1;
	_putchar(p);
	return (l)
}
