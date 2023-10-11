#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if c = alphabet characters
 * @c : character to check
 *
 * Return: 1 if c/C & 0 else
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
