#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints characters in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}	
