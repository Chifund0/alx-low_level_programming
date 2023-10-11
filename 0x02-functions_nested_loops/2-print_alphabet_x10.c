#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
        char c;

	int count;

	count = 0;

	while (count < 10)
	{
		for (c = 97; c <= 122; c++)
		{
			putchar(c);
		}

		putchar('\n');

		count++;
	}
}
