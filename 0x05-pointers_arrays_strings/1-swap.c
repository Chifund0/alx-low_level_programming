#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of 2 ints
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *b ^ *a;
}
