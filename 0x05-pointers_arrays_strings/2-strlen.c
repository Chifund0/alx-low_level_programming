#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
