#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an int
 * @j : contains int to check
 *
 * Return: abs(j)
 */

int _abs(int j)
{
	if (j > 0)
	{
		return (j);
	}
	else if (j == 0)
	{
		return (j);
	}
	else
	{
		return (-j);
	}
}
