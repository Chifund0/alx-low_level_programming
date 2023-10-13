#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints 4rm 0 - 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;

	c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}
