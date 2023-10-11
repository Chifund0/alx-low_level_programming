#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for alphabet characters in lowercase
 * @c : character to check
 *
 * Return: 1 if c & 0 if C
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
