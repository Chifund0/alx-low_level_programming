#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n : character to print
 *
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	int c;
	int j;
	int h;

	c = 43;
	j = 48;
	h = 45;

	if (n > 0)
	{
		_putchar(c);

		return (1);
	}
	else if (n == 0)
	{
		_putchar(j);

		return (0);
	}
	else
	{
		_putchar(h);

		return (-1);
	}
}
