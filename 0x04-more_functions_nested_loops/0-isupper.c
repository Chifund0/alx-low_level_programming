#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for alphabet characters in uppercase
 * @c : character to check
 *
 * Return: 1 if C & 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
